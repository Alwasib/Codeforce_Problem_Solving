#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p=2,sum=0,c=0,d=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n/2;i++)
        {
            if(p%2==0)
            {
                a[i]=p;
                sum=sum+p;
            }
            p=p+2;
        }
        p=1;
        for(int i=n/2;i<n-1;i++)
        {
            if(p%2==1)
            {
                a[i]=p;
                c=c+p;
            }
            p=p+2;
        }
         d=sum-c;
         if(d%2==1)
         {
             a[n-1]=d;
             cout<<"Yes"<<endl;
            for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
         }
         else
         {
             cout<<"NO"<<endl;
         }
    }
}
