#include <stdio.h>
#define SIZE 10

int stack[SIZE];
int top = -1;

void push(int element) {
    if (top == SIZE - 1) {
        printf("Stack overflow\n");
    } else {
        stack[++top] = element;
        printf("Element %d pushed into stack\n", element);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Deleted element is %d\n", stack[top--]);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\nPress 1 to add element to stack\nPress 2 to delete element from stack\nPress 3 to exit\n");
        scanf("%d", &choice);

        if (choice == 1) {
            int element;
            printf("Enter an element: ");
            scanf("%d", &element);
            push(element);
        } else if (choice == 2) {
            pop();
        } else if (choice == 3) {
            break;
        } else {
            printf("Wrong choice\n");
        }
    }
    return 0;
}
