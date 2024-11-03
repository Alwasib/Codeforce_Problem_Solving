#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,d=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='+')
            {
                c++;
            }
            else
            {
                d++;
            }
        }
        if(c==n)
        {
            cout<<c<<endl;
        }
        else if(d==n)
        {
            cout<<n<<endl;
        }
        else if(c==d)
        {
            cout<<0<<endl;
        }
        else if(c>d)
        {
            cout<<c-d<<endl;
        }else
        {
            cout<<d-c<<endl;
        }

    }
}
