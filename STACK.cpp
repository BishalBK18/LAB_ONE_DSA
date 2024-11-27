#include <stdio.h>
#define SIZE 5
void push(int);
void pop();
int peek();
void display();

int stack[SIZE];
int top = -1;

int main() {
int choice, data, r; // Declare 'r' for storing the peek value
while (1) {
    printf("Enter 1 for push\n");
    printf("Enter 2 for pop\n");
    printf("Enter 3 for peek\n");
    printf("Enter 4 for display\n");
    printf("Enter 5 for exit\n");
    scanf("%d", &choice);
    
switch (choice) {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            push(data);
            break;

case 2:
            pop();
            break;

case 3:
            r = peek();
            if (r != -1) { // Check if peek was successful
                printf("\n%d is on top\n", r);
            }
            break;

case 4:
            display();
            break;

case 5:
            printf("bye bye\n");
            return 0;

default:
            printf("Invalid choice. Please try again.\n");
    }
}
return 0;
}

void push(int d) {
if (top == SIZE - 1) {
    printf("\nStack overflow\n");
} else {
    top++;
    stack[top] = d;
    printf("\nPUSH successful\n");
}
}

void pop() {
if (top == -1) {
    printf("Stack underflow\n");
} else {
    printf("%d is popped\n", stack[top]);
    top--;
}
}

int peek() {
if (top == -1) {
    printf("\nStack is empty\n");
    return -1; // Return -1 to indicate that the stack is empty
} else {
    return stack[top];
}
}

void display() {
if (top == -1) {
    printf("\nStack is empty\n");
} else {
    printf("Stack elements are:\n");
    for (int i = 0; i <= top; i++) {
        printf("%d\n", stack[i]);
    }
}
} 

