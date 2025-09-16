#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "phonebook.dat"

typedef struct {
    char name[50];
    char phone[20];
} Contact;

void addContact() {
    FILE *fp = fopen(FILENAME, "ab");  // append in binary mode
    Contact c;

    if (!fp) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter name: ");
    scanf(" %[^\n]", c.name);   // read string with spaces
    printf("Enter phone: ");
    scanf(" %[^\n]", c.phone);

    fwrite(&c, sizeof(Contact), 1, fp);
    fclose(fp);

    printf("Contact saved successfully!\n");
}

void viewContacts() {
    FILE *fp = fopen(FILENAME, "rb");
    Contact c;
    int i = 1;

    if (!fp) {
        printf("No contacts found.\n");
        return;
    }

    printf("\n--- Contact List ---\n");
    while (fread(&c, sizeof(Contact), 1, fp)) {
        printf("%d. %s - %s\n", i++, c.name, c.phone);
    }

    fclose(fp);
}

void searchContact() {
    FILE *fp = fopen(FILENAME, "rb");
    Contact c;
    char name[50];
    int found = 0;

    if (!fp) {
        printf("No contacts found.\n");
        return;
    }

    printf("Enter name to search: ");
    scanf(" %[^\n]", name);

    while (fread(&c, sizeof(Contact), 1, fp)) {
        if (strcasecmp(c.name, name) == 0) {
            printf("Found: %s - %s\n", c.name, c.phone);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Contact not found.\n");
    }

    fclose(fp);
}

void deleteContact() {
    FILE *fp = fopen(FILENAME, "rb");
    FILE *temp = fopen("temp.dat", "wb");
    Contact c;
    char name[50];
    int found = 0;

    if (!fp || !temp) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter name to delete: ");
    scanf(" %[^\n]", name);

    while (fread(&c, sizeof(Contact), 1, fp)) {
        if (strcasecmp(c.name, name) != 0) {
            fwrite(&c, sizeof(Contact), 1, temp);
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(temp);

    remove(FILENAME);
    rename("temp.dat", FILENAME);

    if (found) {
        printf("Contact deleted successfully!\n");
    } else {
        printf("Contact not found.\n");
    }
}

int main() {
    int choice;

    do {
        printf("\n--- Phone Book ---\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addContact(); break;
            case 2: viewContacts(); break;
            case 3: searchContact(); break;
            case 4: deleteContact(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

