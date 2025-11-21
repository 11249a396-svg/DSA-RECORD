PROGRAM-07

 AIM :
To implement single linked list all operations using switch case

 Algorithm:

1.createNode(value)

.Allocate memory for new node
Store data = value
Set next = NULL
Return the new node

2. insertAtEnd(head, value)

Create a new node
If head is NULL → head = new node
Else traverse to last node
Attach new node at end

3. display(head)

Start from head
Print each data
Move to next until NULL

4. deleteAtBeginning(head)

If list empty → print message
Else store head node in temp
Move head to next
Free temp

5. deleteAtEnd(head)

If list empty → print message
If only one node → delete it
Else traverse till last but one node
Free last node

6. deleteAtPosition(head, pos)
If list empty → print message
If pos == 1 → call deleteAtBeginning
Traverse to (pos-1)th node
If invalid position → print error
Else remove node and free memory

PROGRAM:
#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Insert node at the end
void insertAtEnd(struct Node **head, int value) {
    struct Node *newNode = createNode(value);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Display linked list
void display(struct Node *head) {
    struct Node *temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Delete node at beginning
void deleteAtBeginning(struct Node **head) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct Node *temp = *head;
    *head = (*head)->next;
    free(temp);
    printf("Deleted node from beginning.\n");
}

// Delete node at end
void deleteAtEnd(struct Node **head) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        printf("Deleted last node.\n");
        return;
    }

    struct Node *temp = *head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
    printf("Deleted node from end.\n");
}

// Delete node at a specific position
void deleteAtPosition(struct Node **head, int position) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    if (position == 1) {
        deleteAtBeginning(head);
        return;
    }

    struct Node *temp = *head;
    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Invalid position.\n");
        return;
    }

    struct Node *nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    free(nodeToDelete);
    printf("Deleted node at position %d.\n", position);
}

// Main function to test
int main() {
    struct Node *head = NULL;

    // Insert nodes
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);

    display(head);

    // Delete operations
    deleteAtBeginning(&head);
    display(head);

    deleteAtEnd(&head);
    display(head);

    deleteAtPosition(&head, 2);
    display(head);

    return 0;
}

OUTPUT:
Linked List: 10 -> 20 -> 30 -> 40 -> NULL
Deleted node from beginning.
Linked List: 20 -> 30 -> 40 -> NULL
Deleted node from end.
Linked List: 20 -> 30 -> NULL
Deleted node at position 2.
Linked List: 20 -> NULL

RESULT

The operations of creating, inserting, displaying, and deleting nodes in a single linked list were successfully implemented and executed.
