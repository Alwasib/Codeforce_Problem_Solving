#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,x,n,m,i,j,s,a,b,p,q;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld",&x);

        ll n[x],m[x];
        a=10e9; b=10e9;

        for(i=0;i<x;i++)
        {
            scanf("%lld",&n[i]);

            if(n[i]<a) a=n[i];
        }

        for(i=0;i<x;i++)
        {
            scanf("%lld",&m[i]);

            if(m[i]<b) b=m[i];
        }

        s=0;
        for(i=0;i<x;i++)
        {
            if(n[i]>a&&m[i]>b)
            {
                p=n[i]-a; q=m[i]-b;

                if(p<=q) s=s+p+(q-p);
                else s=s+q+(p-q);
            }
            else if(n[i]>a) s=s+n[i]-a;
            else if(m[i]>b) s=s+m[i]-b;
        }

        printf("%lld\n",s);
    }
}
