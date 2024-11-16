#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,x,y,m=0,n=0,d=0,e=0,sum=0,p=0,q=0;
        cin>>a>>b>>c>>x>>y;
             if(a<x)
             {
                 m=max(a,x);
                 n=min(a,x);
                 d=m-n;
             }
             if(b<y)
             {
                  p=max(b,y);
                 q=min(b,y);

                 e=p-q;
             }
           sum=d+e;
           if(c>=sum)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }


    }
}
