#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,f,k;
        cin>>n>>f>>k;
        f=f-1;
        int x=0,c=0,d=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i==f)
            {
                x=a[i];
            }
        }
        sort(a,a+n,greater<int>());
        for(int i=0;i<k;i++)
        {
            if(a[i]==x)
            {
                c++;
            }
        }
        for(int i=k;i<n;i++)
        {
            if(a[i]==x)
            {
                d++;
            }
        }
        if(c>0&&d==0)
        {
            cout<<"YES"<<endl;
        }
        else if(c==0&&d>0)
        {
            cout<<"NO"<<endl;
        }
        else if(c>0&&d>0)
        {
            cout<<"MAYBE"<<endl;
        }
    }
}
