#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;
    string s;
    cin>>s;
    string p;
    for(int i=0;i<5;i++)
    {
        cin>>p;
        if(s[0]==p[0]||s[1]==p[1])
        {
            c++;
        }
    }
    if(c>0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
