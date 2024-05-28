#include<stdio.h>

int main(){
    int arr[]={8,1,7,4,5,6,7,8};
    int size=8;
    int lb=0,ub=size-1;
    int sorting;
    for (int i = 1; i < size; i++)
    {
        sorting=0;
        for (int j = 0; j < size-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int t =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
                sorting=1;
            }
        }
        if (sorting==0)
        {
            break;
        }
    }
    
    if (sorting == 0)
    {
        // printf("Array is already sorted\n");
        for (int k = 0; k < size; k++)
        {
            printf("%d ", arr[k]);
        }
        return 0;
    }
    
    printf("Sorted array\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
