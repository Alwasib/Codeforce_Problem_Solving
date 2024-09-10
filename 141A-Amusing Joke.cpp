#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,d;
    cin>>a>>b>>c;
    int x,y,n=0,p=0,m=0;
    x=a.size();
    y=b.size();
    p=c.size();
    m=x+y;
    if(m==p)
    {
       for(int i=0;i<x;i++)
    {
        d=d+a[i];
    }
    for(int i=0;i<y;i++)
    {
        d=d+b[i];
    }
    sort(d.begin(),d.end());
    sort(c.begin(),c.end());
    for(int i=0;i<p;i++)
    {
        if(d[i]==c[i])
        {
            n++;
        }
    }

    if(n==p)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
    else
    {
       cout<<"NO"<<endl;
    }

}
