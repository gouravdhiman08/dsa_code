// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node *next;
// };

// struct node *head = NULL, *lastnode = NULL;

// struct node *createNode(int data) {
//     struct node *temp = (struct node *)malloc(sizeof(struct node));
//     temp->data = data;
//     temp->next = NULL;
//     return temp;
// }

// void insertAtFirst(int data) {
//     struct node *newnode = createNode(data);
//     if (head == NULL) {
//         head = lastnode = newnode;
//     } else {
//         newnode->next = head;
//         head = newnode;
//     }
// }

// void insertAtLast(int data) {
//     struct node *newnode = createNode(data);
//     if (head == NULL) {
//         head = lastnode = newnode;
//     } else {
//         lastnode->next = newnode;
//         lastnode = newnode;
//     }
// }
// void insertAtPosition(int data, int position) {
//     struct node *newnode = createNode(data);
//     if (position == 1) {
//         newnode->next = head;
//         head = newnode;
//         if (lastnode == NULL) {
//             lastnode = newnode;
//         }
//     } else {
//         struct node *temp = head;
//         int i = 1;
//         while (i < position - 1 && temp != NULL) {
//             temp = temp->next;
//             i++;
//         }
//         if (temp == NULL) {
//             printf("Position out of bounds\n");
//             free(newnode);
//         } else {
//             newnode->next = temp->next;
//             temp->next = newnode;
//             if (newnode->next == NULL) {
//                 lastnode = newnode;
//             }
//         }
//     }
// }

// void showList() {
//     printf("\nList is:\n");
//     struct node *temp = head;
//     while (temp != NULL) {
//         printf("%d(%p) ---> ", temp->data, (void *)temp->next);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// int main() {
//    int choice, data, position;
    
//     while (1) {
//         printf("\nMenu:\n");
//         printf("1. Insert at First\n");
//         printf("2. Insert at Last\n");
//         printf("3. Insert at Position\n");
//         printf("4. Show List\n");
//         printf("5. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
        
//         switch (choice) {
//             case 1:
//                 printf("Enter data to insert at first: ");
//                 scanf("%d", &data);
//                 insertAtFirst(data);
//                 break;
//             case 2:
//                 printf("Enter data to insert at last: ");
//                 scanf("%d", &data);
//                 insertAtLast(data);
//                 break;
//             case 3:
//                 printf("Enter data to insert: ");
//                 scanf("%d", &data);
//                 printf("Enter position to insert: ");
//                 scanf("%d", &position);
//                 insertAtPosition(data, position);
//                 break;
//             case 4:
//                 showList();
//                 break;
//             case 5:
//                 exit(0);
//             default:
//                 printf("Invalid choice. Please try again.\n");
//         }
//     }
//     return 0;
// }
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

void sum_and_average() {
    if (!head) {
        printf("List is empty!\n");
        return;
    }
    int sum = 0;
    int count = 0;
    struct node *temp = head;
    while (temp) {
        sum += temp->data;
        temp = temp->next;
        count++;
    }
    printf("Sum of all nodes: %d\n", sum);
    printf("Average of all nodes: %.2f\n", (float)sum / count);
}

void search() {
    int key, found = 0, pos = 0;
    printf("Enter the node value to be searched: ");
    scanf("%d", &key);
    struct node *temp = head;
    while (temp) {
        pos++;
        if (temp->data == key) {
            found = 1;
            break;
        }
        temp = temp->next;
    }
    if (found) {
        printf("%d found at position %d\n", key, pos);
    } else {
        printf("%d not found in the list\n", key);
    }
}

void find_max() {
    if (!head) {
        printf("List is empty!\n");
        return;
    }
    int max = head->data;
    struct node *temp = head;
    while (temp) {
        if (temp->data > max) {
            max = temp->data;
        }
        temp = temp->next;
    }
    printf("Maximum value: %d\n", max);
}

void find_min() {
    if (!head) {
        printf("List is empty!\n");
        return;
    }
    int min = head->data;
    struct node *temp = head;
    while (temp) {
        if (temp->data < min) {
            min = temp->data;
        }
        temp = temp->next;
    }
    printf("Minimum value: %d\n", min);
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
void reverse() {
    struct node *prev = NULL, *current, *nextnode;
    current = nextnode = head;
    while (current != NULL) {
        nextnode = nextnode->next;
        current->next = prev;
        prev = current;
        current = nextnode;
    }
    head = prev;
    printf("List has been reversed.\n");
    showList();
}
int main() {
    int choice, data, position;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at First\n");
        printf("2. Insert at Last\n");
        printf("3. Insert at Position\n");
        printf("4. Show List\n");
        printf("5. Sum and average\n");
        printf("6. Search element\n");
        printf("7. Find max element\n");
        printf("8. Find min element\n");
        printf("9. Reverse LinkedList\n");
        printf("10. Exit\n");

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
                sum_and_average();
                break;
            case 6:
                search();
                break;
            case 7:
                find_max();
                break;
            case 8:
                find_min();
                break;
            case 9:
                reverse();
                break;
            case 10:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}