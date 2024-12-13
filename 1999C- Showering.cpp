#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,s,m,a=0,b=0,c=0;
        cin>>n>>s>>m;
        int l[n],r[n];
        for(int i=0;i<n;i++)
        {
            cin>>l[i]>>r[i];
        }
        a=abs(l[0]-0);
        b=abs(m-r[n-1]);
        if(a>=s||b>=s)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            for(int i=0;i<n-1;i++)
            {
                if(l[i+1]-r[i]>=s)
                {
                    cout<<"YES"<<endl;
                    c=2;
                    break;
                }
                else
                {
                    c=1;
                }
            }
            if(c==1)
            {
                 cout<<"NO"<<endl;
            }
            else if(c==0)
            {
                cout<<"NO"<<endl;
            }

        }
    }
}
