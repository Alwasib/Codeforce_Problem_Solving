#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,s=0;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
         for(int i=0;i<n;i++)
        {

            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        for(int i=0;i<k;i++)
        {
            if(a[i]<b[i])
            {
                swap(a[i],b[i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            s=s+a[i];
        }

        cout<<s<<endl;

    }
}
