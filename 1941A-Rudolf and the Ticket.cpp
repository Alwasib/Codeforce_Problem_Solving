#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int a[n],b[m];
        int c=0,x,sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            x=a[i];
            for(int j=0;j<m;j++)
            {
                sum=x+b[j];
                if(sum<=k)
                {
                    c++;
                }
                else
                {
                    continue;
                }
                sum=0;
            }
            x=0;
        }
        cout<<c<<endl;
    }
}
