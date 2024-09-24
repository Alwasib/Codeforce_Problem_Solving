#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,c=0;
        cin>>n>>m;
        if(n>=m)
        {
        c=n-m;
        if(c%2==0)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
