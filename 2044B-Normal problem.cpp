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
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='p')
            {
                p=p+"q";
            }
            else if(s[i]=='q')
            {
                p=p+"p";
            }
            else
            {
                p=p+s[i];
            }
        }
        cout<<p<<endl;
    }
}
