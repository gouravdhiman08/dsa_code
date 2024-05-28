#include <stdio.h>
#define max_size 10

int main() {
    int arr[] = {1, 2, 3, 4, 5, 8};
    int size = 6;
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
