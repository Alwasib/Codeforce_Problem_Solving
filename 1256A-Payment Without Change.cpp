#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
       long long int a,b,n,s;
        cin>>a>>b>>n>>s;
        long long int r=s%n;
        if(r<=b&&a*n+b>=s)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
