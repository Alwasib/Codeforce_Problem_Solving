#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        bool d=false;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=c[i]&&b[i]!=c[i])
            {
                d=true;
                break;
            }
        }
        if(d)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

