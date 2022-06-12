#include <iostream>

using namespace std;

int main()
{
    int n,flag = 0;
    cout<< "Enter the number : ";
    cin>>n;
    a = n/2;
    for(int i = 2;i<n/2;i++){
        if(n%i==0){
            cout << n << "is prime number" << endl;
        }
        flag = 1;
    }
    if(flag = 0){
    cout << n<<" is not a prime number" << endl;
    }
    return 0;
}
