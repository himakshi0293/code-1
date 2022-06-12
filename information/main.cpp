

#include<iostream>
using namespace std;

class find_largest
{
        private:
                int x,y,z;
    public:
        void input()
        {
                cout<<"\nEnter 1st number :";
                cin>>x;
                cout<<"\nEnter 2nd number :";
                cin>>y;
                cout<<"\nEnter 3rd number :";
                cin>>z;
        }

        void cal()
        {
                if((x>y)&&(x>z)){
                    cout<<x;
                }
                else if((y>x)&&(y>z)){
                    cout<<y;
                }
                else{
                    cout<<z;
                }

        }
};

int main()
{
        find_largest s;
        s.input();
        s.cal();

        return 0;
}
