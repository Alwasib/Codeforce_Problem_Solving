#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n=7;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
       long long int b=a[0]+a[1];
        cout<<a[0]<<" "<<a[1]<<" "<<a[n-1]-b<<endl;
    }
}
