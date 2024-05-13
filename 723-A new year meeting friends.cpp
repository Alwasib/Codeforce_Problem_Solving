#include<iostream>
using namespace std;
int main()
{
   int a,b,c,p,d;
    cin>>a>>b>>c;
   if(a>b&&b>c&&c<a)
    {
       p=a-b;
       d=b-c;
       cout<<p+d<<endl;

    }
    else if(a>b&&c>b&&c<a)
    {
        p=a-c;
        d=c-b;
        cout<<p+d<<endl;


    }
    else if(b>a&&a>c&&b>c)
    {
        p=b-a;
        d=a-c;
         cout<<p+d<<endl;

    }
    else if(c>a&&b>a&&b<c)
    {
         p=c-b;
        d=b-a;
         cout<<p+d<<endl;

    }
   else if(b>c&&c>a&&a<b)
    {
         p=b-c;
        d=c-a;
         cout<<p+d<<endl;

    }
     else if(a>b&&c>b&&a<c)
    {
        p=c-a;
        d=a-b;
        cout<<p+d<<endl;


    }
}
