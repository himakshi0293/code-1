#include<bits/stdc++.h>
using namespace std;
void print(int n,int s[],int f[]){
    int i=0;
    cout<<i;
    for(int j=1;j<n;j++){
        if(s[j]>=f[i]){
            cout<<j;
        }
        i=j;
    }
}
int main(){
    int s[] ={1,0,5,5};
    int f[]={3,4,6,7};
    int n=(sizeof(s)/sizeof(0));
    print(n,s,f);
    return 0;
}