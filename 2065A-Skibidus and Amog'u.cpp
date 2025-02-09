#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,p="";
        cin>>s;
        for(int i=0;i<s.size()-2;i++)
        {
           p=p+s[i];
        }
        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='u'&&s[i+1]=='s')
           {
                cout<<p<<"i"<<endl;
                break;
           }
        }

    }
}
