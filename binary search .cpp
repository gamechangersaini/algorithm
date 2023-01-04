#include<iostream>
using namespace std;
int binary_search(int a[],int target,int start,int last)
{
    int mid,c=2;
    if(start<=last)
    {
        mid = (last + start)/2;
        {
            if (a[mid]==target)
            {
                cout<<"given element is present in  array"<<target<<endl;
                return 1;
            }
            else if(a[mid]<target)
            {
                mid=mid+1;
                binary_search(a,target,mid,last);
            }
            else if(a[mid]>target)
            {
                mid=mid-1;

                binary_search(a,target,start,mid);
            }

        }
    }
    else
    {
        cout<<"given element is not  present in  array "<<target<<endl;
    }


}
int main()
{

    int a[20],n;
    cout<<"enter the no. of element present in array\n";
    cin>>n;
    int target,start=1,last;
    last=n;
    cout<<"enter the element if array\n";
    for (int i=0; i<n; i++)
    {
        cin>>a[i];

    }
    cout<<"enter the finding element \n";
    cin>>target;
    binary_search(a,target,start,last);

    return 0;
}
