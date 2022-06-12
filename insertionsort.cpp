#include<iostream>
using namespace std;
int main ()
{
   int myarray[5] = { 12,4,3,1,15};
   
   for(int i=0;i<5;i++)
   {
      cout <<myarray[i]<<"\t";
   }
   for(int k=1; k<5; k++)
   {
      int temp = myarray[k];
      int j= k-1;
      while(j>=0 && temp <= myarray[j])
      {
         myarray[j+1] = myarray[j];
         j = j-1;
      }
   myarray[j+1] = temp;
   }
cout<<"\n";
for(int i=0;i<5;i++)
   {
   cout <<myarray[i]<<"\t";
   }
}