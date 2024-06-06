// code for creating a linkedlist
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *newnode, *head = 0, *lastnode = 0;

struct node *createNode(int data) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = 0;
    return temp;
}
// insert at last position...[SAME CODE]
void createList(int data) {
    newnode = createNode(data);
    if (head == 0) {
        head = lastnode = newnode;
    } else {
        lastnode->next = newnode;
        lastnode = newnode;
    }
}

void showList() {
    printf("\nList is:\n");
    struct node *temp = head;
    while (temp != 0) {
        printf("%d(%p) ---> ", temp->data, (void *)temp->next);
        temp = temp->next;
    }
    printf("0\n");
}

int main() {
    createList(10);
    createList(20);
    createList(30);
    createList(40);
    createList(50);
    createList(60);
    showList();
    return 0;
}
