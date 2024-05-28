// array is sorted or not
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
    
    int sorted = 1;

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i+1]) {
            sorted = 0;
            break;
        }
    }
    
    if (sorted == 0) {
        printf("\nArray is not sorted.\n");
    } else {
        printf("\nArray is sorted.\n");
    }
    
    return 0;
}
