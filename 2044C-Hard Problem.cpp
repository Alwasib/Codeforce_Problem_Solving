#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,a,b,c,sum=0,d=0;
        cin>>m>>a>>b>>c;
        if(a>0)
        {
            if(a<=m)
        {
            d=d+m-a;
            sum=sum+a;
        }

        else if(a>m)
        {
            sum=sum+m;
        }
        }
        if(b>0)
        {
            if(b<=m)
        {
            d=d+m-b;
            sum=sum+b;
        }

        else if(b>m)
        {
            sum=sum+m;
        }
        }
        if(c>0)
        {
            if(c<=d)
            {
                sum=sum+c;
            }
            else
            {
                sum=sum+d;
            }

        }
        cout<<sum<<endl;
    }
}
