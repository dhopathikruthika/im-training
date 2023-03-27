#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void bubbleSort(int arr[], int n);
int main() {
    srand(time(NULL));
    int arr[10];
    for(int i = 0; i < 10; i++) 
    {
        arr[i] = rand() % 100 + 1;
    }
    printf("Original array: ");
    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    bubbleSort(arr, 10);
    printf("Sorted array: ");
    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
void bubbleSort(int arr[], int n) 
{
    int temp;
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
               temp = arr[j];
               arr[j] = arr[j + 1];
               arr[j + 1] = temp;
            }
        }
    }
}
