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
        int c=0,f=0,l=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1'&& c==0)
            {
                f=i;
                c++;
            }
            else if(s[i]=='1')
            {
                l=i;
            }
        }
        c=0;
        for(int i=f;i<l;i++)
        {
            if(s[i]=='0')
            {
               c++;
            }
        }
        cout<<c<<endl;
    }
}
