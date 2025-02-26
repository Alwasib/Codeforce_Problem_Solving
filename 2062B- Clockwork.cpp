#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
         for(int i=0;i<n;i++)
        {
            if(a[i]<=2*max(i,n-1-i))
            {
                c++;
                break;
            }
        }
        if(c==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
