#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 20}; 
    int ub = sizeof(arr) / sizeof(arr[0])-1; 
    int lb=0;
    int newElement = 12;
   
    // insertion at last
    // ub++;
    // arr[ub] = newElement;

    // insertion at first
    //ub++;
    // arr[ub]=arr[lb];
    // arr[lb]=newElement;

    // insert at specific location
    // int pos=2;
    // ub++;
    // arr[ub]=arr[pos-1];
    // arr[pos-1]=newElement;

    for (int i = 0; i < ub+1; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}