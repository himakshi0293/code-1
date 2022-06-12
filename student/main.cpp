#include<iostream>
using namespace std;

class student
{
               int roll_no;
               char name[20];
               char cls[8];
               int marks[5];
               float percent;
               float cal();
               public:
               void readmarks();
               void displaymarks();
};


float student::cal()
{
               percent=0;
               for(int i=0;i<5;i++)
                              percent+=marks[i];
               percent=(percent/500)*100;
               return percent;
}


void student::readmarks()
{

               cout<<"Enter the name:";
               cin>>name;
               cout<<"Enter the roll no.:";
               cin>>roll_no;
               cout<<"Enter the class :";
               cin>>cls;
               cout<<"Enter the marks:"<<endl;
               for(int j=0;j<5;j++){
                              cout<<"\tEnter mark "<<j+1<<":";
                              cin>>marks[j];
               }

}


void student::displaymarks()
{
               cout<<"Name:"<<name<<endl;
                cout<<"Roll no:"<<roll_no<<endl;
               cout<<"Class:"<<cls<<endl;
               cout<<"Percentage:"<<cal()<<endl;
}


int main()
{
               student s;
               s.readmarks();
               s.displaymarks();
               return 0;
}


