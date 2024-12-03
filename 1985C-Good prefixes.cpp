#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,c=0,sum=0;
        int mx=0;
        cin>>n;
         int a[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(a[0]==0)
        {
           c++;
        }
        else
        {
          sum=sum+a[0];
          mx=max(0,a[0]);
        }
        for(long long int i=1;i<n;i++)
        {
            sum=sum+a[i];
            mx=max(mx,a[i]);
            if(sum-mx==mx)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
}
