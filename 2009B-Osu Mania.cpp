#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p=0;
        cin>>n;
        string s ;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>s;
            for(int j=0;j<4;j++)
            {
                if(s[j]=='#')
                {

                    a[i]=j;

                }
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            cout<<a[i]+1<<" ";
        }
    }
}
