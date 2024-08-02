#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c=0,n=0,d=0,e=0,f=0,g=0,h=0,j=0,i=0,k=0;
        int l=0,m=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0;
        cin>>a>>b;
        if(a==b)
        {
            cout<<"0"<<endl;
        }
        else if(a<b)
        {
          n=b-a;
          d=n/10;
          e=n%10;
          c=c+d;

          f=e/9;
          g=e%9;
          c=c+f;

          h=g/8;
          i=g%8;
          c=c+h;

          j=i/7;
          k=i%7;
          c=c+j;

          l=k/6;
          m=k%6;
          c=c+l;

           o=m/5;
          p=m%5;
          c=c+o;

           q=p/4;
          r=p%4;
          c=c+q;

           s=r/3;
          t=r%3;
          c=c+s;

          u=t/2;
          v=t%2;
          c=c+u;

          w=v/1;
          x=v%1;
          c=c+w;
          cout<<c<<endl;
        }
        else if(a>b)
        {
             n=a-b;
          d=n/10;
          e=n%10;
          c=c+d;

          f=e/9;
          g=e%9;
          c=c+f;

          h=g/8;
          i=g%8;
          c=c+h;

          j=i/7;
          k=i%7;
          c=c+j;

          l=k/6;
          m=k%6;
          c=c+l;

           o=m/5;
          p=m%5;
          c=c+o;

           q=p/4;
          r=p%4;
          c=c+q;

           s=r/3;
          t=r%3;
          c=c+s;

          u=t/2;
          v=t%2;
          c=c+u;

          w=v/1;
          x=v%1;
          c=c+w;
          cout<<c<<endl;
        }
    }
}
