#include <stdio.h>

#define max_size 10

int main() {
    int arr[] = {1, 2, 3, 4, 5, 8};
    int size = 6;
    int arr_copy[6]; // is size ko kaise pta kre phle hi 
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            arr_copy[count] = arr[i];
            count++;
        }
    }

    printf("%d\n", count);
    printf("Elements of arr_copy:\n");
    for (int i = 0; i < count; i++) {
        printf("%d\n", arr_copy[i]);
    }

    return 0;
}
