#include<stdio.h>
#include "myarray.h"
#define max_size 10

int main(){

    int arr[max_size];
    int size;
    printf("enter the size of array");
    scanf("%d",&size);

    checkoverflow(size,max_size);
    makearray(arr,size);
    printarray(arr,size);

}