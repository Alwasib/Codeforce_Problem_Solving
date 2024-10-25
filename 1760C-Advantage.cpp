#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,d=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];

        }
        sort(a,a+n);
        d=a[n-1];
        c=a[n-2];
        for(int i=0;i<n;i++)
        {
            if(b[i]==d)
            {
                cout<<b[i]-c<<" ";
            }
            else
            {
                cout<<b[i]-d<<" ";
            }
        }
        cout<<endl;

    }
}
