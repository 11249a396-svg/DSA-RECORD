PROGRAM:STRING REVERSAL(USING STACK)

AIM:
The aim of the program is to reverse a given string using the Last-In, First-Out (LIFO) property of a stack data structure.

ALGORITHM:
The string reversal is achieved through two main phases: Pushing and Popping.
Phase 1: 
Pushing Characters onto the Stack
START the stringReversal() function.
Declare an array of characters, string, to store the input string, and an integer variable, size, to store the length of the string.
Read the size of the string from the user.
Read the input string from the user.
Iterate through the string from the first character to the last (index C = 0 to size - 1).
In each iteration, call the push(string[C]) function to place the character onto the top of the stack.
LIFO Effect: The last character of the string will be the last one pushed, residing at the very top of the stack.
Phase 2:
Popping Characters to Obtain the Reversed String
Print the header "Reversed string: ".
Iterate a loop from C = 0 to size - 1.
In each iteration, call the pop() function to retrieve the character from the top of the stack.
Print the character returned by pop().
Reversal Effect: Since the last character of the original string was at the top (LIFO), it is the first one popped and printed, thus reversing the order of the characters.
END the stringReversal() function.

PROGRAM:
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int Top = -1;
char STACK[MAX];

// Function to push an item onto the stack
void push(char item) {
    if (Top == MAX - 1) {
        printf("Stack overflow\n");
    } else {
        Top = Top + 1;
        STACK[Top] = item;
    }
}

// Function to pop an item from the stack
char pop() {
    char item;
    if (Top == -1) {
        printf("Stack underflow/empty\n");
        return '\0';  // Return null character if stack is empty
    } else {
        item = STACK[Top];
        Top = Top - 1;
        return item;
    }
}

// Function to reverse a string using the stack
void stringReversal() {
    char string[MAX];
    int size;

    printf("Enter the size of the string: ");
    scanf("%d", &size);

    printf("Please enter string to reverse: ");
    scanf("%s", string);

    // Push each character of the string onto the stack
    for (int C = 0; C < size && string[C] != '\0'; C++) {
        push(string[C]);
    }

    printf("Reversed string: ");

    // Pop characters from the stack to print them in reverse
    for (int C = 0; C < size; C++) {
        printf("%c", pop());
    }
    printf("\n");
}

int main() {
    stringReversal();
    return 0;
}

OUTPUT:
Enter the size of string: 9
Please enter string to reverse: Vaishnavi
Reversed string: ivanhsiaV

RESULT:
RESULT
The program successfully reversed the input string "Vaishnavi" to "ivanhsiaV" by utilizing the stack data structure, demonstrating the practical application of the LIFO (Last-In, First-Out) principle for simple data

