# term-work-
#include<iostream>
using namespace std;
int main()
{
     int n,sum=1;
     cout<<"enter the number for finding  factorial\n";
     cin>>n;
      for(int i=n;i>1;i--)
      {
        sum = sum*i;
      }
      cout<<sum<<endl;
      return 0;
}
