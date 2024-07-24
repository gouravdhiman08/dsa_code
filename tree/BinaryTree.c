#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

struct Node* insert(int arr[], int i, int n) {
    struct Node* root = NULL;
    if (i < n) {
        root = newNode(arr[i]);
        
        root->left = insert(arr, 2 * i + 1, n);
        
        root->right = insert(arr, 2 * i + 2, n);
    }
    return root;
}

void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int sumNodes(struct Node* root) {
    if (root == NULL)
        return 0;
    int sum=root->data + sumNodes(root->left) + sumNodes(root->right);
    return sum;
}

int productNodes(struct Node* root) {
    if (root == NULL)
        return 1;
    int product= root->data * productNodes(root->left) * productNodes(root->right);
    return product;
}

int countNodes(struct Node* root) {
    if (root == NULL)
        return 0;
    int count= 1 + countNodes(root->left) + countNodes(root->right);
    return count;
}

void levelOrder(struct Node* root) {
    if (root == NULL)
        return;
    
    struct Node* queue[100]; 
    int front = 0, rear = 0;
    
    queue[rear++] = root;
    
    while (front < rear) {
        struct Node* current = queue[front++];
        printf("%d ", current->data);
        
        if (current->left)
            queue[rear++] = current->left;
        
        if (current->right)
            queue[rear++] = current->right;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    struct Node* root = insert(arr, 0, n);
    
    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");

    printf("Preorder traversal: ");
    preorder(root);
    printf("\n");

    printf("Postorder traversal: ");
    postorder(root);
    printf("\n");

    int sum = sumNodes(root);
    int count = countNodes(root);
    double average = (double)sum / count;
    int product = productNodes(root);
    
    printf("Sum of all nodes: %d\n", sum);
    printf("Average of all nodes: %.2f\n", average);
    printf("Product of all nodes: %d\n", product);
    levelOrder(root);

    return 0;
}