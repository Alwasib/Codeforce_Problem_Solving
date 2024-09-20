#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0,r=0;
        cin>>n;
        int x,y,mn=0;
        cin>>x>>y;
        mn=min(x,y);
        ans=n/mn;
        r=n%mn;
        if(r==0)
        {
             cout<<ans<<endl;
        }
        else
        {
             cout<<ans+1<<endl;
        }



    }
}

