#include<bits/stdc++.h>
using namespace std;
int part(int arr[],int l ,int r)
{
    int pivot= arr[r];
    int i= l-1;
    for (int j = l; j <= r-1; j++)  
    {  
        if (arr[j] < pivot)  
        {  
            i++; 
            int t = arr[i];  
            arr[i] = arr[j];  
            arr[j] = t;  
        }  
    }  
    int t = arr[i+1];  
    arr[i+1] = arr[r];  
    arr[r] = t;  
    return (i + 1);  
}  
  
void quicksort(int arr[],int l,int r){
    if(l<r){
        int pindex = part(arr,l,r);
        quicksort(arr,l,pindex-1);
        quicksort(arr,pindex+1,r);
    }
}
void printarr(int arr[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout<<arr[i]<<" ";
}  
int main()  
{  
    int arr[] = { 14, 7, 39, 74, 12, 28 };  
    int n = sizeof(arr) / sizeof(arr[0]);  
    cout<<"Before: "<<endl;
    printarr(arr, n);  
    quicksort(arr, 0, n - 1);
    cout<<endl;
    cout<<"After: "<<endl;    
    printarr(arr, n);  
      
    return 0;  
}  