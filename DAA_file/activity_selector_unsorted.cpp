#include<bits/stdc++.h>
using namespace std;
struct activity
{
    int st,ft;
};
bool sortact(activity s1,activity s2){
    return(s1.ft < s2.ft);
}
void print(activity arr[],int n){
    sort(arr,arr+n,sortact);
    int i=0;
    cout<<i;
    for(int j=1;j<n;j++){
        if(arr[j].st>=arr[i].ft){
            cout<<j;
        }
        i=j;
    }
}

int main(){
    int x;
    cout<<"Enter the size of array: ";
    cin>>x;
    activity arr[x];
    for(int i=0;i<x;i++){
        cout<<"Enter start time: "<<endl;
        cin>>arr[i].st;
        cout<<"Enter finish time: "<<endl;
        cin>>arr[i].ft;
    }
    print(arr,x);
    return 0;
}