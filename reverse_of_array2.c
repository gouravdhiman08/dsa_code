// reverse array without the help of second array
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 8};
    int size = 6;
    int temp=0,ub=size-1;
    for (int i = 0; i <size/2; i++) {
        temp=arr[i];
        arr[i]=arr[ub];
        arr[ub]=temp;
        ub--;
    }
    printf("Reversed array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
