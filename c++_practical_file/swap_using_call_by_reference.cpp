#include<iostream>  

using namespace std;    

void swap(int *x, int *y)  

{  

 int swap;  

 swap=*x;  

 *x=*y;  

 *y=swap;  

}  

int main()   

{    

 int x, y;    

 cout<<"Enter the value of x: ";
 cin>>x;

cout<<"Enter the value of y: ";
 cin>>y;

 swap(&x, &y);  // passing value to function  

 cout<<"Value of x is: "<<x<<endl;  

 cout<<"Value of y is: "<<y<<endl;  

 return 0;  

}