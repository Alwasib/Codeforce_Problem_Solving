#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,d,e,f,g,h,m;
    cin>>n;
   a=n/100;
   b=n%100;
   c=b/20;
   d=b%20;
   e=d/10;
   f=d%10;
   g=f/5;
   h=f%5;
   m=h/1;
   cout<<a+c+e+g+m;

}

