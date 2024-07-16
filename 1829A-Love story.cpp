#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t,c=0;
    string s,p="codeforces";
    int l=p.size();
    cin>>t;
    while(t--)
    {

        cin>>s;
        c=0;
        for(int i=0;i<l;i++)
        {
           if(s[i]!=p[i])
           {
               c++;
           }
        }
       cout<<c<<endl;
    }

}
