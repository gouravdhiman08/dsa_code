#include<stdio.h>
int main(){
    int arr[]={1,8,7,2,6,3,5,4};
    int size =8;
    for (int i = 0; i < size-1; i++)
    {
        int min=i;
        int j=i+1;
        while (j<size)
        {
            if (arr[min]>arr[j])
            {
                min=j;
            }
            j++;
        }
        if (i!=min)
        {
            int t=arr[i];
            arr[i]=arr[min];
            arr[min]=t;
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
}