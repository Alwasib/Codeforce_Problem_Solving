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
        if(s[0]<s[2]&&(s[1]=='>'||s[1]=='='))
        {
            cout<<s[0]<<"<"<<s[2]<<endl;
        }
        else if(s[0]>s[2]&&(s[1]=='<'||s[1]=='='))
        {
            cout<<s[0]<<">"<<s[2]<<endl;
        }
        else if(s[0]==s[2]&&(s[1]=='<'||s[1]=='>'))
        {
            cout<<s[0]<<"="<<s[2]<<endl;
        }
        else
        {
            cout<<s<<endl;
        }

    }
}
