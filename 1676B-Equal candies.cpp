#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sm=0,ans=0,sum=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
         cin>>a[i];
        }
        sort(a,a+n);
        sm=a[0];
        for(int i=1;i<n;i++)
        {
         ans=a[i]-sm;
         sum=sum+ans;
        }

        cout<<sum<<endl;
    }
}
