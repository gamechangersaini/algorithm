#include<iostream>
using namespace std;
int main()
{

    int a=0,b=1,c=0,n;
    cout<<"enter the fibonacci series term\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<c<<endl ;
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
