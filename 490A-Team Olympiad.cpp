#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mn;
    int f[5000],s[5000],t[5000];
    int x=0,y=0,z=0;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];

        if(a[i]==1)
        {
           x++;
           f[x]=i;
        }
        else if(a[i]==2)
        {
            y++;
            s[y]=i;
        }
        else if(a[i]==3)
        {
            z++;
            t[z]=i;
        }
    }
    mn=min(y,min(x,z));

    if(mn==0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<mn<<endl;
        for(int i=1;i<=mn;i++)
        {
            cout<<f[i]<<" "<<s[i]<<" "<<t[i]<<endl;
        }
    }

}
