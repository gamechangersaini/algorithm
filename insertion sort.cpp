#include<iostream>
using namespace std;
void insertion(int a[],int n )
{
    int key;
        {
            for(int j=2; j<=n; j++)
            {
                key=a[j];
                 int i=j-1;
                while (key<a[i]&&i>0)
                {
                    a[i+1]=a[i];
                    a[i]=key;
                    i--;
                }
                {
                    for(int i =1; i<=n; i++)
                        cout<<" "<<a[i];
                }
                cout<<endl;

            }

        }
         cout<<"\n\n\n array after sorting\n";
    for(int i=1; i<=n; i++)
    {
        cout<<" "<<a[i];
    }


}
int main()
{
    int n,a[20] ;
    cout<<"enter the element present in the array\n";
    cin>> n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    insertion(a,n);


}
