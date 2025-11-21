PROGRAM-4
EXPERIMENT:IMPLEMENTATION OF QUEUE

AIM:
To write a C program to implement a Queue using an array with operations such as Insertion (Enqueue) and Deletion (Dequeue).

ALGORITHM:
1.Start
2.Initialize front = -1 and rear = -1.
3.Insertion (Enqueue):
  .If rear == MAX - 1, display "Queue Overflow".
   Else, if front == -1, set front = 0.
  Increment rear and insert the new element at queue[rear].
4.Deletion (Dequeue):
  If front == -1 or front > rear, display "Queue Underflow".
  Else, remove the element at queue[front] and increment front.
5.Display:
  If front == -1, display "Queue is Empty".
  Else, display all elements from front to rear.
6.Stop

PROGRAM:
#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// Enqueue operation
void enqueue(int item) {
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
    } else {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = item;
        printf("%d inserted into the queue.\n", item);
    }
}

// Dequeue operation
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
    } else {
        printf("%d deleted from the queue.\n", queue[front]);
        front++;
    }
}

// Display queue elements
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty\n");
    } else {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

// Main function
int main() {
    int choice, item;
    do {
        printf("\n--- Queue Operations ---\n");
        printf("1. Insert (Enqueue)\n");
        printf("2. Delete (Dequeue)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &item);
                enqueue(item);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}

OUTPUT:
--- Queue Operations ---
1. Insert (Enqueue)
2. Delete (Dequeue)
3. Display
4. Exit
Enter your choice: 1
Enter element to insert: 10
10 inserted into the queue.

Enter your choice: 1
Enter element to insert: 20
20 inserted into the queue.

Enter your choice: 3
Queue elements are: 10 20

Enter your choice: 2
10 deleted from the queue.

Enter your choice: 3
Queue elements are: 20

Enter your choice: 4
Exiting...

RESULT:
The queue has been successfully implemented using an array in C language.
The program performs insertion (enqueue), deletion (dequeue), and display operations correctly.
