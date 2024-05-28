#include<stdio.h>
int main(){
    int arr[]={1,8,7,2,6,3,5,4};
    int size =8;
    int lb=0,ub=8;

    for (int i = 1; i < size; i++)
    {
        int key=arr[i];
        int j=i-1;
        while (j>=0 && key<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    
    for (int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
}