#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=0,a=0,b=0,c=0;
        l=s.size();
        if(l%2==0)
        {
        for(int i=0;i<l;i++)
        {
            if(s[i]=='A')
            {
                a++;
            }
            else if(s[i]=='B')
            {
                b++;
            }
            else if(s[i]=='C')
            {
                c++;
            }
        }

        if(a==b&&c==0)
        {
            cout<<"YES"<<endl;
        }
        else if(b==c&&a==0)
        {
            cout<<"YES"<<endl;
        }
        else if(a>0&&c>0&&b==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(a>b)
        {
            b=0;
        }
        else
        {
            b=b-a;
        }
        if(b>0&&b==c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        }


        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
