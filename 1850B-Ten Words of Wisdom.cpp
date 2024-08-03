#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,mx=0;
    cin>>t;
    while(t--)
    {
        int n,mx=0,c=0;
        cin>>n;
        int a,b;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            if(a<=10)
            {
                if(b>mx)
                {
                    mx=b;
                    c=i+1;
                }
            }

        }

             cout<<c<<endl;
    }
}

