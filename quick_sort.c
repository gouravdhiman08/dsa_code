#include<stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int quick(int arr[], int lb, int ub) {
    int pivot = arr[lb];
    int s = lb; 
    int e = ub; 
    while (s < e) {
        while (pivot>=arr[s])
            s++;
        while (pivot<arr[e])
            e--;
        if (s<e)
        {
            swap(&arr[s],&arr[e]);
        }         
    }
    swap(&arr[lb], &arr[e]);
    return e;
}

void partition(int arr[], int lb, int ub) {
    if (lb < ub) {
        int pivot = quick(arr, lb, ub);
        partition(arr, lb, pivot - 1);
        partition(arr, pivot + 1, ub);
    }
}

int main() {
    int arr[] = {2, 6, 9, 1, 3, 0, 8, 4, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    partition(arr, 0, n - 1);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}