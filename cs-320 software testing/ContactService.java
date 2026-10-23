import java.util.HashMap;
import java.util.Map;

public class ContactService {
    // data structure to hold contacts
    private Map<String, Contact> contacts = new HashMap<>();

    // Structure for adding a new contact
    public void addContact(Contact contact) {
        if (contact == null || contacts.containsKey(contact.getContactId())) {
            throw new IllegalArgumentException("Contact already exists or is invalid");
        }
        contacts.put(contact.getContactId(), contact);
    }

    // Contact Delete by ID structure
    public void deleteContact(String contactId) {
        if (!contacts.containsKey(contactId)) {
            throw new IllegalArgumentException("Contact not found");
        }
        contacts.remove(contactId);
    }

    // Contact fields by ID update
    public void updateContact(String contactId, String firstName, String lastName, String phone, String address) {
        if (!contacts.containsKey(contactId)) {
            throw new IllegalArgumentException("Contact not found");
        }

        Contact contact = contacts.get(contactId);

        // fields updated if new values aren't empty
        if (firstName != null && !firstName.isEmpty()) contact.setFirstName(firstName);
        if (lastName != null && !lastName.isEmpty()) contact.setLastName(lastName);
        if (phone != null && !phone.isEmpty()) contact.setPhone(phone);
        if (address != null && !address.isEmpty()) contact.setAddress(address);
    }

    // Grabs contact
    public Contact getContact(String contactId) {
        return contacts.get(contactId);
    }

}
