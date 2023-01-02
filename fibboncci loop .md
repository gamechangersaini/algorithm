#include<iostream>
using namespace std;
int main()
{

    int a=0,b=1,c=0,n;
    cout<<"enter the fibonacci series term\n";
    cin>>n;
    cout<<a<<endl<<b<<endl;
    for(int i=2;i<n;i++)
    {

        c=a+b;
        a=b;
        b=c;
         cout<<c<<endl ;
    }
    return 0;
}
