#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int mn=0,n=0,sum=0;
    n=min(k2,k5);
    mn=min(k6,n);
    sum=256*mn;
    k2=k2-mn;
    mn=0;
    if(k2>0)
    {
        mn=min(k2,k3);
        sum=sum+(mn*32);
    }
    cout<<sum<<endl;
}
