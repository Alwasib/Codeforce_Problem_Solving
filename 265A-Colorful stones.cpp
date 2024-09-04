#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int l=0,p=0,c=0;
    l=t.size();
    for(int i=0;i<l;i++)
    {
        if(t[i]!=s[c])
        {
            p=c;
        }
       else if(t[i]==s[c])
        {
            p=c+1;
            c++;
        }

    }
    cout<<p+1;
}
