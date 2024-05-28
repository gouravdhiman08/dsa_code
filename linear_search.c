#include<stdio.h>
int main(){

    int arr[]={1,2,3,4,5,6,7,8};
    int size=8;
    int key=4 ;
    int find=0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i]==arr[key])
            {
                find=1;
            }        
    }
    if (find==1)
    {
        printf("found");
    }
    else
    {
        printf("not found");
    }
}