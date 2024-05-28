#include<stdio.h>
#define max_size 10

int main(){
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
    
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    float avg = sum / size; 

    printf("\nAverage is: %.2f\n", avg);
    
    return 0;
}