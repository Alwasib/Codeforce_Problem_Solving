#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p=0,c=0;
        cin>>n;
        p=n/4;
        c=n%4;
        if(c==0)
        {
            cout<<p<<endl;
        }
        else
        {
            cout<<p+1<<endl;
        }
    }
}
