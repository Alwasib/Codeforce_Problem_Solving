#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=1;i<n;i++)
        {
            if(a[i-1]>b[i])
            {
                c+=a[i-1]-b[i];
            }
        }
        cout<<c+a[n-1]<<endl;
    }
}
