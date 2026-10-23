import static org.junit.jupiter.api.Assertions.*;
import org.junit.jupiter.api.Test;

public class ContactServiceTest {
    @Test
    public void testAddContactSuccess() {
        ContactService service = new ContactService();
        Contact contact = new Contact("12345", "Kenny", "Smith", "1234567890", "123 Target Lane");
        service.addContact(contact);

        assertNotNull(service.getContact("12345"));
        assertEquals("Kenny", service.getContact("12345").getFirstName());
    }

    @Test
    public void testAddDuplicateContactFails() {
        ContactService service = new ContactService();
        Contact contact1 = new Contact("12345", "Kenny", "Smith", "1234567890", "123 Target Lane");
        service.addContact(contact1);

        assertThrows(IllegalArgumentException.class, () -> {
            Contact contact2 = new Contact ("12345", "John", "Doe", "0987654321", "123 boring St");
            service.addContact(contact2);
        });
    }

    @Test
    public void testDeleteContact() {
        ContactService service = new ContactService();
        Contact contact = new Contact("12345", "Kenny", "Smith", "1234567890", "123 Target Lane");
        service.addContact(contact);
        service.deleteContact("12345");

        assertNull(service.getContact("12345"));
    }

    @Test
    public void testUpdateContact() {
        ContactService service = new ContactService();
        Contact contact = new Contact("12345", "Kenny", "Smith", "1234567890", "123 Target Lane");
        service.addContact(contact);

        service.updateContact("12345", "Christopher", "Jones", "0987654321", "456 HEB Blvd");

        assertEquals("Christopher", service.getContact("12345").getFirstName());
        assertEquals("Jones", service.getContact("12345").getLastName());
        assertEquals("0987654321", service.getContact("12345").getPhone());
        assertEquals("456 HEB Blvd", service.getContact("12345").getAddress());
    }
}
