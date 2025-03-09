#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to hold customer information
struct Customer {
    int userID;  // Unique identifier for each customer
    char name[50];
    char phoneNumber[15];
    float usage;
    float totalBill;
};

// Linked List Node structure
struct Node {
    struct Customer data;
    struct Node* next;
};

// Stack structure for undo functionality
struct Stack {
    struct Customer data[100];
    int top;
};

// Global variables
struct Node* head = NULL;  // Head of the linked list
struct Stack undoStack = {{}, -1};  // Stack for undo functionality

// Push onto undo stack
void push(struct Customer record) {
    if (undoStack.top < 99) {
        undoStack.data[++undoStack.top] = record;
    } else {
        printf("Stack overflow!\n");
    }
}

// Pop from undo stack
struct Customer pop() {
    if (undoStack.top >= 0) {
        return undoStack.data[undoStack.top--];
    } else {
        printf("Stack underflow!\n");
        //return (struct Customer){"", "", 0, 0};
        return (struct Customer){0, "", "", 0.0, 0.0};

    }
}

// Add new customer record (Linked List)
void addRecord() {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    // Generate a unique user ID (for example, incremental)
    newNode->data.userID = head == NULL ? 1 : head->data.userID + 1;

    printf("\nEnter name: ");
    scanf(" %[^\n]s", newNode->data.name);
    printf("Enter phone number: ");
    scanf("%s", newNode->data.phoneNumber);
    printf("Enter usage (in minutes): ");
    scanf("%f", &newNode->data.usage);
    newNode->data.totalBill = newNode->data.usage * 0.1;

    // Insert into Linked List
    newNode->next = head;
    head = newNode;

    printf("\nRecord added successfully! User ID: %d\n", newNode->data.userID);
}

// View all records (Linked List)
void viewRecords() {
    struct Node* current = head;
    printf("\nUser ID\tName\tPhone Number\tUsage(min)\tTotal Bill($)\n");
    while (current != NULL) {
        printf("%d\t\t%s\t%s\t%.2f\t\t%.2f\n", current->data.userID,
               current->data.name, current->data.phoneNumber, current->data.usage, current->data.totalBill);
        current = current->next;
    }
}

// Modify a customer record (Linked List)
void modifyRecord(int userID) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data.userID == userID) {
            printf("\nEnter new usage (in minutes) for %s: ", current->data.name);
            scanf("%f", &current->data.usage);
            current->data.totalBill = current->data.usage * 0.1;

            // Push the old record to the stack for undo functionality
            push(current->data);
            printf("\nRecord modified successfully!\n");
            return;
        }
        current = current->next;
    }
    printf("\nRecord not found!\n");
}

// View a customer's payment details (Linked List)
void viewPayment(int userID) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data.userID == userID) {
            printf("\nUser ID: %d\n%s\t%s\t%.2f\t\t%.2f\n", current->data.userID, current->data.name, current->data.phoneNumber, current->data.usage, current->data.totalBill);
            return;
        }
        current = current->next;
    }
    printf("\nRecord not found!\n");
}

// Delete a customer record (Linked List)
void deleteRecord(int userID) {
    struct Node* current = head;
    struct Node* prev = NULL;

    while (current != NULL) {
        if (current->data.userID == userID) {
            // Push the record to the stack for undo functionality
            push(current->data);

            // Remove from Linked List
            if (prev == NULL) {
                head = current->next;
            } else {
                prev->next = current->next;
            }

            // Free memory
            free(current);
            printf("\nRecord deleted successfully!\n");
            return;
        }
        prev = current;
        current = current->next;
    }
    printf("\nRecord not found!\n");
}

// Undo last modification or deletion (using Stack)
void undoLastAction() {
    if (undoStack.top >= 0) {
        struct Customer lastAction = pop();
        printf("Undoing action on User ID: %d\n", lastAction.userID);
        addRecord();  // You would have to implement the actual reversal logic (this is just a placeholder)
    } else {
        printf("No actions to undo!\n");
    }
}

// Bill payment method with various options
void bill_payment() {
    int choice;
    printf("\nSelect a payment method:\n");
    printf("1. Rocket\n");
    printf("2. Bkash\n");
    printf("3. Nogod\n");
    printf("4. Upai\n");
    printf("5. Visa Card\n");
    printf("6. Merchant Pay\n");
    printf("7. Cancel Payment\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected Rocket.\n");
            break;
        case 2:
            printf("You selected Bkash.\n");
            break;
        case 3:
            printf("You selected Nogod.\n");
            break;
        case 4:
            printf("You selected Upai.\n");
            break;
        case 5:
            printf("You selected Visa Card.\n");
            break;
        case 6:
            printf("You selected Merchant Pay.\n");
            break;
        case 7:
            printf("Payment cancelled.\n");
            break;
        default:
            printf("Invalid choice! Payment cancelled.\n");
    }
}

// Linear search function (by User ID or Phone Number)
void linearSearch() {
    int choice;
    printf("\nSearch by:\n");
    printf("1. User ID\n");
    printf("2. Phone Number\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int searchUserID;
        printf("\nEnter User ID to search: ");
        scanf("%d", &searchUserID);

        struct Node* current = head;
        while (current != NULL) {
            if (current->data.userID == searchUserID) {
                printf("\nUser ID: %d\nName: %s\nPhone: %s\nUsage: %.2f\nTotal Bill: %.2f\n",
                       current->data.userID, current->data.name, current->data.phoneNumber, current->data.usage, current->data.totalBill);
                return;
            }
            current = current->next;
        }
        printf("\nRecord not found!\n");
    } else if (choice == 2) {
        char searchPhoneNumber[15];
        printf("\nEnter Phone Number to search: ");
        scanf("%s", searchPhoneNumber);

        struct Node* current = head;
        while (current != NULL) {
            if (strcmp(current->data.phoneNumber, searchPhoneNumber) == 0) {
                printf("\nUser ID: %d\nName: %s\nPhone: %s\nUsage: %.2f\nTotal Bill: %.2f\n",
                       current->data.userID, current->data.name, current->data.phoneNumber, current->data.usage, current->data.totalBill);
                return;
            }
            current = current->next;
        }
        printf("\nRecord not found!\n");
    } else {
        printf("Invalid choice!\n");
    }
}

// Display menu options
void displayMenu() {

    printf("\n********** TELECOM BILLING SYSTEM **********\n");
    printf("\t*#*#*#* BY HELLO.ERROR *#*#*#* \n");

    printf("\n1. Add New Record\n");
    printf("2. View List of Records\n");
    printf("3. Modify Record\n");
    printf("4. View Payment\n");
    printf("5. Bill Payment\n");
    printf("6. Search Record\n");
    printf("7. Delete Record\n");
    printf("8. Undo Last Action\n");
    printf("9. Exit\n");
}

int main() {
    int choice;
    int userID;

    while (1) {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addRecord();
                break;

            case 2:
                viewRecords();
                break;

            case 3:
                printf("\nEnter User ID to modify record: ");
                scanf("%d", &userID);
                modifyRecord(userID);
                break;

            case 4:
                printf("\nEnter User ID to view payment: ");
                scanf("%d", &userID);
                viewPayment(userID);
                break;

            case 5:
                bill_payment();
                break;

            case 6:
                linearSearch();
                 break;

            case 7:
                printf("\nEnter User ID to delete record: ");
                scanf("%d", &userID);
                deleteRecord(userID);
                break;

            case 8:
                undoLastAction();
                break;

            case 9:
                return 0;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}
