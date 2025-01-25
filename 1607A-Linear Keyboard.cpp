#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0;
        string k,s;
        cin>>k>>s;
        vector<int>pos(26);
        for(int i=0;i<26;i++)
        {
            pos[k[i]-'a']=i;
        }
        for(int i=1;i<s.size();i++)
        {
            c=c+abs(pos[s[i]-'a']-pos[s[i-1]-'a']);
        }
        cout<<c<<endl;
    }
}
