// code for circular queue...
#include <stdio.h>
#define size 10
int circularqueue[size];
int rear = -1, front = -1;

void enque(int data) {
    if ((rear + 1) % size == front) {
        printf("Overflow\n");
    } else if (front == -1) {
        front = rear = 0;
        circularqueue[rear] = data;
    } else {
        rear = (rear + 1) % size;
        circularqueue[rear] = data;
    }
}

void deque() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else if (front == rear) {
        printf("\nDeleted element is %d\n", circularqueue[front]);
        front = rear = -1;
    } else {
        printf("\nDeleted element is %d\n", circularqueue[front]);
        front = (front + 1) % size;
    }
}

void show() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    int i = front;
    printf("\nQueue is: ");
    while (i != rear) {
        printf("%d ", circularqueue[i]);
        i = (i + 1) % size;
    }
    printf("%d\n", circularqueue[rear]);
}
int main() {
    int choice, data;
    while (1) {
        printf("\n1. Add (Enqueue)\n2. Delete (Dequeue)\n3. Show Queue\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to add: ");
                scanf("%d", &data);
                enque(data);
                break;
            case 2:
                deque();
                break;
            case 3:
                show();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}