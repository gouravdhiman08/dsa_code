#include<stdio.h>

int main (){
    int arr[]={5, 10, 15, 20}; 
    int ub = sizeof(arr) / sizeof(arr[0])-1; 
    int lb=0;
    int newElement = 12; 

    // delete from last 
    // ub--;

    // delete from first
    // arr[lb]=arr[ub];
    // ub--;

    // delete from specific location
    // int pos=3;
    // arr[pos-1]=arr[ub];
    // ub--;

    for (int i = 0; i < ub+1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;

}