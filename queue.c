#include<stdio.h>
#define size 10

int queue[size];

int f=-1;
int r=-1;

void enqueue(int element){
    if (r == size-1)
    {
        printf("queue is overflow");
    }
    else if (r == -1)
    {
        f=r=0;

        
        queue[r]=element;
    }
    else
    {
        queue[++r]=element;
    }
}

void dequeue(){
    if (f == -1)
    {
        printf("queue is underflow/empty");
    }
    else if (f == r)
    {
        printf("deleted element is %d", queue[f]);
        r = f = -1;
    }
    else
    {
        printf("deleted element %d", queue[f++]);
    }
}

void show(){
    int i=f;
    printf("\n Queue is ");
    while (i<=r)
    {
        printf("%d ",queue[i]);
        i++;
    }
    
}

int main(){
    enqueue(22);
    show();
    dequeue();
    return 0;
}
