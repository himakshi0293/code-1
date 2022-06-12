#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int *a, int start, int end)

{

    int pivot = a[start], p1 = start + 1, i, temp;

    for (i = start + 1; i <= end; i++)
    {

        if (a[i] < pivot)
        {
            if (i != p1)
            {
                temp = a[p1];
                a[p1] = a[i];
                a[i] = temp;
            }
            p1++;
        }
    }

    a[start] = a[p1 - 1];
    a[p1 - 1] = pivot;

    return p1 - 1;
}

void quickSort(int *a, int start, int end)
{
    int p1;
    if (start < end)
    {
        p1 = partition(a, start, end);
        quickSort(a, start, p1 - 1);
        quickSort(a, p1 + 1, end);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = size-1; i >= 0; i--)
    cout<<arr[i]<<" ";
    cout<<" ";
}

int main()
{
    int arr[] = { 14, 7, 39, 74, 12, 28 }; 
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout<<"Sorted array: ";
    printArray(arr, n);
    return 0;
}