#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,p=0;
        cin>>a>>b>>c>>d;
        int mn=min(a,b);
        int mx=max(a,b);
        for(int i=mn;i<=mx;i++)
        {
            if(c==i)
            {
                p++;
            }
            if(d==i)
            {
                p++;
            }
        }
        if(p==0||p==2)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
