import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

public class ContactTest {
    @Test
    public void testContactCreationSuccess() {
        Contact contact = new Contact("1234567890", "Kenny", "Smith", "1234567890", "123 Target Lane");

        assertEquals("1234567890", contact.getContactId());
        assertEquals("Kenny", contact.getFirstName());
        assertEquals("Smith", contact.getLastName());
        assertEquals("1234567890", contact.getPhone());
        assertEquals("123 Target Lane", contact.getAddress());
    }

    @Test
    public void testContactIdToolong() {
        // ID > 11 characters, throws error
        assertThrows(IllegalArgumentException.class, () -> {
            new Contact("12345678901", "Kenny", "Smith", "1234567890", "123 Target Lane");
        }); 
    }

    @Test
    public void testFirstNameTooLong() {
        // First name is > 11 characters throws errors
        assertThrows(IllegalArgumentException.class, () -> {
            new Contact("1234567890", "Christopher", "Smith", "1234567890", "123 Target Lane");
        });
    }

    @Test
    public void testPhoneNotTenDigits() {
        // phone digits < 10, throws error
        assertThrows(IllegalArgumentException.class, () -> {
            new Contact("1234567890", "Kenny", "Smith", "123456789", "123 Target Lane");
        });
    }
}
