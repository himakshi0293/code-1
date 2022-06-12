#include<iostream>
using namespace std;
 
int findsmallest (int[],int);
int main ()
{
   int myarr[5] = {12,45,8,15,33};
   int pos,temp;

   for(int i=0;i<5;i++)
   {
      cout<<myarr[i]<<"\t";
   }
   for(int i=0;i<5;i++)
   {
      pos = findsmallest (myarr,i);
      temp = myarr[i];
      myarr[i]=myarr[pos];
      myarr[pos] = temp;
   }
  
   for(int i=0;i<5;i++)
   {
      cout<<myarr[i]<<"\t";
   }
return 0;
}
int findsmallest(int myarr[],int i)
{
   int elesmall,position,j;
   elesmall = myarr[i];
   position = i;
   for(j=i+1;j<5;j++)
   {
      if(myarr[j] < elesmall)
      {
      elesmall = myarr[j];
      position=j;
      }
   }
   return position;
}