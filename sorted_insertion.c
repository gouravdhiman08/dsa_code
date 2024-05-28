#include<stdio.h>
#define max_size 10
int main(){
    int arr[max_size];
    int size;

    x:
    printf("\nEnter the size of array");
    scanf("%d",&size);
    if (size>max_size)
    {
        printf("\nsize is overflow please enter size under %d",max_size);
        goto x;
    }
    printf("\nEnter the elements of array\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    int lb=0,ub=size-1;
    printf("Enter the element for insert in array");
    int newElement;
    scanf("%d",&newElement);
    int i;
    for (i=0; i < size; i++)
    {
        if (arr[i]<newElement)
        {
            continue;
        }
        break;
    }
    ub++;
    if (size==max_size)
    {
        printf("array is overflow");
    }
    else
    {
int j=ub;

   while (j>i)
   {
    arr[j]=arr[j-1];
    j--;
   }
   arr[j]=newElement;
   for (int i = 0; i < size+1; i++)
   {
        printf("%d ",arr[i]);
   }
}
    return 0;
}