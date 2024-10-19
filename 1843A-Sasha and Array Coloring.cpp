#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,c=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        if(n%2==0)
        {
            for(int i=0;i<n/2;i++)
            {
                sum=sum+a[i];
            }
            for(int i=n/2;i<n;i++)
            {
                c=c+a[i];
            }
             cout<<c-sum<<endl;
        }
        else
        {
            for(int i=0;i<n/2;i++)
            {
                sum=sum+a[i];
            }
            for(int i=n/2+1;i<n;i++)
            {
                c=c+a[i];
            }
             cout<<c-sum<<endl;
        }


    }
}
