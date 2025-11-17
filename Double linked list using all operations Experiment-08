PROGRAM:08
 AIM:

To  implement Doubly Linked List and perform the following operations using a switch case:
Insert at beginning
Insert at end
Delete from beginning
Delete from end
Display list

ALGORITHM:
1. Start
2. Create a node structure
data
prev
next
3. For Insert at beginning
Create new node
If list empty → new node = head
Else
new->next = head
head->prev = new
head = new
4. For Insert at end
Create new node
Traverse to last node
Link last node’s next to new node
5. For Delete from beginning
If list empty → print "Empty"
Else
temp = head
head = head->next
free(temp)
6. For Delete from end
Traverse to last node
Update previous node next = NULL
free last node
7. For Display
Traverse from head and print each node
8. Stop

 PROGRAM: 
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev, *next;
};

struct node *head = NULL;

// Insert at beginning
void insert_begin(int x) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = head;

    if(head != NULL)
        head->prev = newNode;

    head = newNode;
}

// Insert at end
void insert_end(int x) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = NULL;

    if(head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    struct node *temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

// Delete from beginning
void delete_begin() {
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct node *temp = head;
    head = head->next;
    if(head != NULL) head->prev = NULL;
    free(temp);
}

// Delete from end
void delete_end() {
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct node *temp = head;

    while(temp->next != NULL)
        temp = temp->next;

    if(temp->prev != NULL)
        temp->prev->next = NULL;
    else
        head = NULL;

    free(temp);
}

// Display list
void display() {
    struct node *temp = head;
    if(temp == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("List: ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice, value;

    while(1) {
        printf("\n--- MENU ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Delete from Beginning\n");
        printf("4. Delete from End\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d",&value);
                insert_begin(value);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d",&value);
                insert_end(value);
                break;

            case 3:
                delete_begin();
                break;

            case 4:
                delete_end();
                break;

            case 5:
                display();
                break;

            case 6:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}

 OUTPUT:
--- MENU ---
1. Insert at Beginning
2. Insert at End
3. Delete from Beginning
4. Delete from End
5. Display
6. Exit
Enter choice: 1
Enter value: 10

Enter choice: 2
Enter value: 20

Enter choice: 5
List: 10 20 

Enter choice: 3
Enter choice: 5
List: 20

 RESULT:

The  program for Doubly Linked List was successfully executed and all operations such as insertion, deletion and display were performed correctly.
