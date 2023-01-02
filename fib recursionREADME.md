#include<iostream>
using namespace std;
 int fib(int a)
 {
     int c;
     if(a==1||a==0)
     {
         return a;
     }
    c= fib(a-1)+fib(a-2);
    return c;
 }
 int main()
 {

     int x,i;
     cout<<"enter the term \n";
     cin>> x;
     for(i=0;i<x;i++)
     {
         cout<<" " <<fib(i);
     }
     return 0;
 }

