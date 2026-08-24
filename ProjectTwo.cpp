#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <limits> // Needed for input validation

using namespace std;

// == ==
// Core Structures:
// == ==

struct Course {
    string courseNumber;
    string title;
    vector<string> prerequisites; // Vector handles variable amoutns of prereqs
};

struct Node {
    Course course;
    Node* left;
    Node* right;

    // Default constructor
    Node() {
        left = nullptr;
        right = nullptr;
    }

    // Course initialize
    Node(Course aCourse) : Node() {
        course = aCourse;
    }
};

// == ==
// Binary Search Tree Class (awaiting)
// == ==
class BinarySearchTree {
private:
    Node * root;
    void addNode(Node* node, Course course);
    void inOrder(Node* node);

public:
    BinarySearchTree();
    void InOrder();
    void Insert(Course course);
    Course Search(string courseNumber);
};

// Constructor initializes the root
BinarySearchTree::BinarySearchTree() {
    root = nullptr;
}

// public InOrder triggers the priv recursive function
void BinarySearchTree::InOrder() {
    inOrder(root);
}

// priv InOrder (Recursive)
void BinarySearchTree::inOrder(Node* node) {
    // Principle: Left-Root-Right traversal
    if (node != nullptr) {
        inOrder(node->left);
        cout << node->course.courseNumber << ", " << node->course.title << endl;
        inOrder(node->right);

    }
}

// Public Insert
void BinarySearchTree::Insert(Course course) {
    if (root == nullptr) {
        root = new Node(course);
    } else {
        addNode(root, course);
    }
}

// Private addNode (Recursive)
void BinarySearchTree::addNode(Node* node, Course course) {
    // Compares course numbers to sort left or right
    if (course.courseNumber < node->course.courseNumber) {
        if (node->left == nullptr) {
            node->left = new Node(course);
        } else {
            addNode(node->left, course);
        }
    } else {
        if (node->right == nullptr) {
            node->right = new Node(course);
        } else {
            addNode(node->right, course);
        }
    }
}

// Public Seatch
Course BinarySearchTree::Search(string courseNumber) {
    Node* current = root;

    // Loop until we hit an empty node

    while (current != nullptr) {
        if (current->course.courseNumber == courseNumber) {
            return current->course;
        }
        else if (courseNumber < current->course.courseNumber) {
            current = current->left;
        } else {
            current = current->right;
        }
    }

    Course emptyCourse; // return an empty course object if nothing is found
    return emptyCourse;
}

// == ==
// File parsing function (awaiting)
// == ==
void loadCourses(string csvPath, BinarySearchTree* bst) {
    ifstream file(csvPath);
    string currentLine;

    while (getline(file, currentLine)) {
        Course newCourse;
        stringstream ss(currentLine);
        string token;

        getline(ss, token, ',');
        newCourse.courseNumber = token;

        getline(ss, token, ',');
        newCourse.title = token;

        while (getline(ss, token, ',')) {
            newCourse.prerequisites.push_back(token);
        }

        bst->Insert(newCourse);
    }
}

// == ==
// Main function and menu
// == ==
int main() {
    int choice = 0;
    string csvPath = "CS 300 ABCU_Advising_Program_Input.csv";

    BinarySearchTree bst;

    cout << "Welcome to the course planner." << endl;

    while (choice != 9) {
        cout  << "\n  1. Load Data Structure." << endl;
        cout << "  2. Print Course List." << endl;
        cout << "  3. Print Course." << endl;
        cout << "  9. Exit" << endl;
        cout << "What would you like to do? ";

        cin >> choice;

        switch (choice) {
            case 1:
            cout << "loading data..." << endl;
                loadCourses(csvPath, &bst);
            break;

            case 2:
                cout << "Here is a sample schedule:" << endl;
                bst.InOrder();
                break;
            
            case 3:
                {
                    string courseId;
                    cout << "What course do you want to know about? ";
                    cin >> courseId;
                    
                    for (char &c : courseId) {
                        c = toupper(c);
                    }

                    Course target = bst.Search(courseId);

                    if (!target.courseNumber.empty()) {
                        cout << target.courseNumber << ", " << target.title << endl;
                        cout << "Prerequisites: ";
                        for (string pre : target.prerequisites) {
                            cout << pre << " ";
                        }
                        cout << endl;
                    } else {
                        cout << "Course not found." << endl;
                    }
                }
                break;

            case 9:
                cout << "Thank you for using the course planner!" << endl;
                break;
            
            default:
                cout << choice << " is not a valid option." << endl;
                // clear the input stream to prevent infinite loops if the user types a letter instead of a number
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
        }
    }
    return 0;
}