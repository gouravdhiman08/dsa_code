// reverse array with the help of second array
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 8};
    int size = 6;
    int arr_copy[size]; 

    for (int i = 0; i < size; i++) {
        arr_copy[i] = arr[size-1-i];
    }

    printf("Reversed array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr_copy[i]);
    }

    return 0;
}
