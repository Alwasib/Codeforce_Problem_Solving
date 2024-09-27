#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,p=0;
        cin>>n>>m>>k;
        p=(n*m)-1;
        if(p==k)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
