#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int s, int mid, int e){
int i,j,k;
int n1=mid-s+1;
int n2=e-mid;

int larr[n1],rarr[n2];
for(int i=0;i<n1;i++)
larr[i] =a[s+i];
for(int j=0;j<n2;j++)
rarr[j]=a[mid+1+j];
i=0;
j=0;
k=s;
while(i<n1 && j<n2){
    if(larr[i] <= rarr[j]){
        a[k] =larr[i];
        i++;
    }
    else{
        a[k] =rarr[j];
        j++;
    }
    k++;
}
while(i<n1){
    a[k] =larr[i];
    i++;
    k++;
}
while(i<n1){
    a[k]=larr[i];
    i++;
    k++;
}
}

void mergesort(int a[], int s,int e){
    if(s<e){
        int mid=(s+e)/2;
        mergesort(a,s,mid);
        mergesort(a,mid+1,e);
        merge(a,s,mid,e);

    }
}
    void printarray(int a[],int n){
        int i;
        for(i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }

int main(){
    int a[]={5,8,3,98,12,45,1,0};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"before sorting: ";
    printarray(a,n);
    mergesort(a,0,n-1);
    cout<<"After sorting: ";
    printarray(a,n);
    return 0;
}
