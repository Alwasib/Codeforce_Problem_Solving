#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        set<int>p;
         for(int i=0;i<n;i++)
        {
            p.insert(a[i]);
        }
        d=n-p.size();
        if(d%2==0)
        {
            cout<<p.size()<<endl;
        }
        else
        {
            cout<<p.size()-1<<endl;
        }
    }
}
