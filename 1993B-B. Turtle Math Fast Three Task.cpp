#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,rm1=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        if(sum%3==0)
        {
            cout<<0<<endl;
        }
        else if(sum%3==2)
        {
            cout<<1<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
        {
           if(a[i]%3==1)
           {
              rm1=a[i];
           }
        }
        sum=sum-rm1;
        if(sum%3==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
        }
    }
}
