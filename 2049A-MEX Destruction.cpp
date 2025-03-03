#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,z=0,c=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                z++;
            }
        }
        if(z==n)
        {
            cout<<0<<endl;
        }
        else if(z==0)
        {
            cout<<1<<endl;
        }
        else{
                int f=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]!=0&&!f)
                {

                    c++;
                 f=1;
                }
                if(a[i]==0)
                {
                    f=0;
                }
            }
            if(c>2)
            {
                cout<<2<<endl;
            }
            else{
                cout<<c<<endl;
            }
        }
    }
}
