#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,c=0,mx=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        c=a[0]*(n-1);
        sum=sum+c;
        c=0;
        sum=sum+a[n-1];
        mx=a[n-1]*n;
        c=c+mx;
        cout<<c-sum<<endl;
    }
}
