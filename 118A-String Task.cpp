#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int l=0;
    string s,p;
    cin>>s;
    l=s.size();
    transform(s.begin(),s.end(),s.begin(),::tolower);
    //cout<<s;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='u'||s[i]=='o'||s[i]=='i'||s[i]=='y')
        {
            continue;
        }
        else
        {
            p=p+s[i];

        }
    }
    for(int i=0;i<p.size();i++)
    {
        cout<<"."<<p[i];
    }

}
