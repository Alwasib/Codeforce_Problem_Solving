#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,mn=0,mx=0;
        cin>>n;
        n=n*2;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
               mn++;
            }
            else
            {
                c++;
            }
        }
        if(mn==n)
        {
            cout<<"0 0"<<endl;
        }
        else
        {
            if(c<mn)
            {
                cout<<mn%2<<" "<<c<<endl;
            }
            else
            {
                cout<<c%2<<" "<<mn<<endl;
            }
        }

    }
}
