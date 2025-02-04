#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,sum=0,avg=0,c=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        avg=sum/n;
        if(sum%n!=0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]>avg)
                {
                    c++;
                }
            }
            cout<<c<<endl;
        }
    }
}
