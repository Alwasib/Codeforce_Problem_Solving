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
        int c=0,d=0;
        for(int i=0;i<s.size();i++)
       {
    if(s[i]=='0')
    {
        c++;
    }
    else
    {
        d++;
    }
}
if(c<d)
{
    cout<<c<<endl;
}
else if(d<c)
{
    cout<<d<<endl;
}
else
{
    cout<<c-1<<endl;
}
}
}
