
#include<iostream>
using namespace std;
void bubble(int a[20],int n)
{
    int temp;
    for(int j=0;j<n-1;j++)
    {
    for(int i=0;i<n-j-1;i++)
    {
       if(a[i]>a[i+1])
       {
           temp = a[i];
           a[i]=a[i+1];
           a[i+1]=temp;
       }
       for(int k=0;k<n;k++)
       {
           cout<<" " <<a[k];

       }
       cout<<endl;

    }
    }
     cout<<"after sorting\n ";
    for(int i=0;i<n;i++)
    {
        cout<<" " <<a[i];
    }
}
int main()
{
    int n,a[20];
    cout<<"enter the no of element present in array\n";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubble(a,n);
}
