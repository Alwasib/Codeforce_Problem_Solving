#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,c=0,mx=0,mn=0;
        cin>>a>>b>>n;
        mx=max(a,b);
        mn=min(a,b);
       for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                mn=mx+mn;
                c++;
            }
            else{
                mx=mx+mn;
                c++;
            }

            if(mx>n||mn>n)
            {
                break;
            }

        }
        cout<<c<<endl;
    }
}
