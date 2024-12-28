#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,mx=0,c=0,d=0;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=1;i<n;i++)
        {
            c=a[i]-a[i-1];
            mx=max(c,mx);
            c=0;
        }
        c=2*(x-a[n-1]);
        mx=max(c,mx);
        d=(a[0]-0);
        cout<<max(d,mx)<<endl;
    }
}

