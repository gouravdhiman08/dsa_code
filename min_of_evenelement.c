#include <stdio.h>
#define max_size 10
// error in this code output wrong
int main() {
    int arr[] = {1, 2, 13, 4, 5, 8};
    int size = 6;
    int count = 0;
    int min=arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i]%2==0)
        {
            if (arr[i]<min) {
            min=arr[i];
        }
        }
        
    }

    printf("%d\n", min);

    return 0;
}
