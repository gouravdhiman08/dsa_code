//sum of array all the elements 
#include<stdio.h>
#define max_size 10
int main(){
    int arr[max_size];
    int size;
    printf("enter the size of the array");
    scanf("%d",&size);
    if(size>max_size){
        printf("array is overflow");
    }
printf("\nenter the elements of the array\n");
for (int i = 0; i < size; i++)
{
scanf("%d",&arr[i]);
}

int sum=0;

    for (int i = 0; i < size; i++)
    {
        sum =sum+arr[i];
    }
    
printf("%d",sum);

    return 0;
}