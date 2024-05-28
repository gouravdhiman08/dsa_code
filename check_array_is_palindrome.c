#include<stdio.h>

int main() {
    int arr[] = {1, 2, 3, 3, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int palindrome = 1; 

    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size-1-i]) {
            palindrome = 0; 
            // printf("%d",arr[i]);
            break; 
        }
    }

    if (palindrome == 1) {
        printf("Array is a palindrome\n");
    } else {
        printf("Array is not a palindrome\n");
    }
    return 0;
}
