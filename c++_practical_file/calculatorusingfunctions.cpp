#include<iostream>
using namespace std;
void Sum(int a, int b)
{
    int sum;
    sum=a+b;
    return;
}
void Sub(int a,int b)
{
    int diff;
    if(a>b){
        diff=a-b;
    }
    else{
        diff=b-a;
    }
    return;
}
void Product(int a, int b)
{
    int prod;
    prod=a*b;
    return;
}
void Division(int a, int b)
{
    int mod;
    mod=a/b;
}
int main()
{
    int x,y,operation;
    cout<<"First number";
    cin>>x;
    cout<<"Second number";
    cin>>y;
    cout<<"Choose any one of the follwing: ";
    cout<<"1. ADDITION";
    cout<<"2. SUBTRACTION";
    cout<<"3. MULTIPLICATION";
    cout<<"4. DIVISION";
    cin>>operation;

    if(operation == 1){
        Sum(x,y);
    }
    else if(operation== 2){
        Sub(x,y);
    }
    else if(operation == 3){
        Product(x,y);
    }
    else if(operation == 4){
        Division(x,y);
    }
    else{
        cout<<"Wrong choice";
    }
    return 0;
}
