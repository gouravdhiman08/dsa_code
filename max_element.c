#include<stdio.h>
#define max_size 10

int main() {
    int arr[max_size];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    if (size > max_size) {
        printf("Array is overflow.\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Array is:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    int max = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("\nMax element in array: %d\n", max);

    return 0;
}
