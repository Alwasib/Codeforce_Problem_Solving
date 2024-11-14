#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        float d=0,p=0,sum=0;
        int n=0;
        cin>>a>>b>>c;
        if(a==b)
        {
            cout<<0<<endl;
        }
        else if(c>a&&c>b)
        {
            cout<<1<<endl;
        }
        else if(a>b)
        {
            d=a+b;
            p=d/2;
            sum=p-b;
            n=ceil(sum);
           if(n%c==0)
           {
               cout<<n/c<<endl;
           }
           else{
            cout<<(n/c)+1<<endl;
           }

        }
        else if(a<b)
        {
            d=a+b;
            p=d/2;
            sum=p-a;
            n=ceil(sum);
           if(n%c==0)
           {
               cout<<n/c<<endl;
           }
           else{
            cout<<(n/c)+1<<endl;
           }
        }
    }
}
