#include<stdio.h>
#define max_size 10

int main() {
    int arr[] = {1, 2, 3, 4, 5,8};
    int size=6;
    int arr_copy[size];

    for (int i = 0; i < size; i++) {
        arr_copy[i] = arr[i];
    }

    printf("elements of arr_copy \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr_copy[i]);
    }
    printf("\n");

    return 0;
}
