//minimum element in the array 
#include<stdio.h>
#define max_size 10
int main(){

    int arr[max_size];
    int size;
    printf("enter the size of the array");
    scanf("%d",&size);
    printf("enter the element of the array");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
int min=arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("%d",min);
    return 0;
}