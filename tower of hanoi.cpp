#include<iostream>
using namespace std;
void tower(int n,char a,char b, char c)
{
    if(n>0)
    {
        tower(n-1,a,c,b);
         cout<<"disk "<<n<<"move from "<<a <<"to"<<c <<endl;
        tower(n-1,b,a,c);
    }

}
int main()
{
    int n;
    char a,b,c;
    //a,b,c are the name of the pole
    cout<<"enter the number of the disk present\n";
    cin>>n;
    tower(n,'a','b','c');
}
