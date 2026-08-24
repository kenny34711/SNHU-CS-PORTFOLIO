# SNHU-CS-PORTFOLIO
CS work I do at SNHU

## CS 250: SOFTWATE LIFECYCLE DEVELOPMENT

Question 1: How do I interpret user needs and implement them into a program? How does creating “user stories” help with this?:

- I interpret user needs and implement them into a program by focusing directly on the end-user's experience, functionality, and accessibility. Creating "user stories" is very useful as it helps break down larger tasks into smaller, managable tasks written from the user's opinion. While working on the SNHU Travel project, user stories narrowed my focused directly towards isolating UI design features. I was able to address accessibility improvements, like changing a default blue background to white so the text contrast was readable for the user.

Question 2: How do I approach developing programs? What Agile processes do I hope to incorporate into my future development work?

- When I approach developing programs, I structure my approach into a build, test, and refine software in smaller section workflow. I cannot see myself building an entire application at once which leads to errors and roadblocks; no, I rather work on it a safe and moderate level. My Agile understanding has improved  a lot and for my futute work development I hope to incorporate Agile tools like sprint boards and daily standups. Having a clear visualization of where the team stands day-to-day ensures coding impediments are acknowledged and resolved quickly.

Question 3: What does it mean to be a good team member in software development?

- Communication and collaboration are what brings about a good team member in software development. A good team member avoids assumptions and is actively communicating. To be a good team member means to pause any confusing application behavior and communicates with stakeholders, reaches out to the Product Owner for clarification and does not continue until clarified. A good software developer expects and searches for flaws, finds solutions and ensures the work direction is aligned with the goals of the sprint.


## CS 230: OPERATING PLATFORMS
### Draw It or Lose It - Portfolio reflection

Question 1: Briefly summarize The Gaming Room client and their software requirements. Who was the client? What type of software did they want you to design?

- The Gaming Room is a development client that launched an Android-exclusive application called "Draw It or Lose It". The client wishes to expand into a cross-platform, web-based game. To do this, a client-server environment capable of supporting multiple operating systems without latency was required.

Question 2: What did you do particularly well in developing this documentation?
 
- I did well in clearly defining the system architecture and breaking down each operating platform. By comparing the operating platforms, I was able to conduct a technical analysis for the best server environment recommendation at a low cost build.

Question 3: What about the process of working through a design document did you find helpful when developing the code?

- The UML domain model before writing code was helpful. Visually seeing the architecture inheritance and class relationships made coding head on much more efficient. It ensured that OOP structural patterns were already logically structured before coding began.

Question 4: If you could choose one part of your work on these documents to revise, what would you pick? How would you improve it?

- If I were to revise one part of my work on these documents, I'd expand the API endpoint structures within systems architecture.

Question 5: How did you interpret the user’s needs and implement them into your software design? Why is it so important to consider the user’s needs when designing?

- I interpreted the user's need with a fast, hybrid storage and pre-caching management system. This is important because users expect 30-second rendering rounds without lag so ensuring 8MB image files offloaded to a CDN was crucial.

Question 6: How did you approach designing software? What techniques or strategies would you use in the future to analyze and design a similar software application?

- I approached initially with broad constraints like using specific object models and recommending cloud infrastructure. Going forward, I will use this exact strategy because planning the database and memory constraints early on prevents massive technical debt later in the development cycle.

# CS 255 SYSTEM ANALYSIS
### DRIVERPASS PROJECT REFLECTION

Project Summary: I moved DriverPass from paper to a cloud-based system so students can book lessons online and staff can manage schedules, cars, and reports.

Positive Impact: I turned mainly complex physical business rules into simple, easily digestable diagrams. My UML activity and sequence diagrams helped map out the whole flow, like logins and bookings so the system makes sense and doesn't get stuck in dead ends.

Improvements: I'll spend more time mapping out unexpected variables (what if's), like errors with the server erros or two people booking the same slot at once. Dealing with those cases sooner would save frustration and time later on.

Users: I took the client's feedback and turning it into a clear list of what the system needs to do. If staff doesn't know how to use the gear, the project fails. User experience is top priority.

My approach: I'll stick with OOP. Starting by defining who is using the system and their roles involved will be my go to process, ensuring code always matches the client's business goals.

## CS 300: DATA STRUCTURES AND ALGORITHMS
### CS 300 Portfolio Reflection

What was the problem you were solving in the projects for this course?
- I built a C++ command-line app to help academic advisors easily load, sort, and look up computer science courses and their prerequisites from a CSV file.

How did you approach the problem? Consider why data structures are important to understand.
- I compared Vectors, Hash Tables, and Binary Search Trees (BST). I chose the BST because it naturally sorts data alphabetically as it loads in, making it super fast to print the list and search for specific classes.

How did you overcome any roadblocks you encountered while going through the activities or project?
- I ran into a problem with C++ pointer logic and parsing the irregular CSV lines. I got past them by breaking the logic down step-by-step and using ⁠stringstream⁠ to cleanly chop up the data.

How has your work on this project expanded your approach to designing software and developing programs?
- It showed me the real value of planning. I usually have to script and plan content before it's edited, so mapping out the time and memory complexity before writing any code made sense and made the whole process way smoother.

How has your work on this project evolved the way you write programs that are maintainable, readable, and adaptable?
- I broke the code down into smaller functions and used dynamic vectors, making the code much cleaner and easier for someone else to jump in and update later.
