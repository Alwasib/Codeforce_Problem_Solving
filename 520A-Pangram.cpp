#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
     cin>>n;
    string s;
    cin>>s;
    int count=0;
     for(i=0;i<n;i++)
    {
        s[i]=towlower(s[i]);
    }
    sort(s.begin(),s.end());
    for(i=0;i<n;i++)
    {
        if(s[i]!=s[i+1])
        {
            count++;
        }
    }
    if(count==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
