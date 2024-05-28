#include<stdio.h>
#define max_size 10
int main(){

    int arr[max_size];
    int size;
    x:
    printf("\nenter the size of the array\n");
    scanf("%d",&size);
    if (size>max_size)
    {
        printf("array is overflow please give size between this %d",max_size);
        goto x;
    }

    printf("enter the elements of the array");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("printed array is :-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
    
    printf("enter the position you want to delete");
    int pos;
    scanf("%d",&pos);

    for ( int i = pos-1; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    size--;

    for (int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
return 0;
}