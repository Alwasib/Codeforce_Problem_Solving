#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x=0,y=0;
        cin>>n;
       long long int a[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        x=a[n-2];
        for(long long int i=0;i<n-2;i++)
        {
            y=x-a[i];
            x=0;
            x=y;
            y=0;
        }
        cout<<a[n-1]-x<<endl;
    }
}
