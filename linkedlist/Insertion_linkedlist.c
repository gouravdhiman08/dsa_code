#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL, *lastnode = NULL;

struct node *createNode(int data) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void insertAtFirst(int data) {
    struct node *newnode = createNode(data);
    if (head == NULL) {
        head = lastnode = newnode;
    } else {
        newnode->next = head;
        head = newnode;
    }
}

void insertAtLast(int data) {
    struct node *newnode = createNode(data);
    if (head == NULL) {
        head = lastnode = newnode;
    } else {
        lastnode->next = newnode;
        lastnode = newnode;
    }
}
// insert at specific position...
void insertAtPosition(int data, int position) {
    struct node *newnode = createNode(data);
    if (position == 1) {
        newnode->next = head;
        head = newnode;
        if (lastnode == NULL) {
            lastnode = newnode;
        }
    } else {
        struct node *temp = head;
        int i = 1;
        while (i < position - 1 && temp != NULL) {
            temp = temp->next;
            i++;
        }
        if (temp == NULL) {
            printf("Position out of bounds\n");
            free(newnode);
        } else {
            newnode->next = temp->next;
            temp->next = newnode;
            if (newnode->next == NULL) {
                lastnode = newnode;
            }
        }
    }
}

void showList() {
    printf("\nList is:\n");
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d(%p) ---> ", temp->data, (void *)temp->next);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
   int choice, data, position;
    
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at First\n");
        printf("2. Insert at Last\n");
        printf("3. Insert at Position\n");
        printf("4. Show List\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter data to insert at first: ");
                scanf("%d", &data);
                insertAtFirst(data);
                break;
            case 2:
                printf("Enter data to insert at last: ");
                scanf("%d", &data);
                insertAtLast(data);
                break;
            case 3:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter position to insert: ");
                scanf("%d", &position);
                insertAtPosition(data, position);
                break;
            case 4:
                showList();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
