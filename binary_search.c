// in binary search this is the main condition array must be sorted first.

#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size=8;
    int lb=0,ub=size-1;
    int mid=(lb+ub)/2;
    int key=6;

    while (lb <= ub)
    {
        if (key == arr[mid])
        {
            printf("found");
            break;
        }
        else if (key < arr[mid])
        {
            ub = mid - 1;
        }
        else
        {
            lb = mid + 1;
        }
        mid = (lb + ub) / 2; 
    }
    if (lb > ub)
    {
        printf("not found");
    }
    // else
    // {
    //     printf("found");
    // }
    
    return 0;
}
