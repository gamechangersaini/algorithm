# term-work-
#include<iostream>
using namespace std;
int main()
{
    int n,a[20],target;
    cout<<"enter the number of element present in array\n";
    cin>>n;
    cout<<" input the array element\n";
    for(int i=0;i<n;i++)
    {
         cin>>a[i];
    }
    cout<<"enter the searching element\n";
    cin>>target;
    for(int i=0;i<n;i++)
    {
        if(a[i]==target)
        {
            cout<<" target value is present in array = "<<target<<endl;
            return 0;
        }
    }
    cout<<"given element is not present in array = "<<target;
    return 0;
}
