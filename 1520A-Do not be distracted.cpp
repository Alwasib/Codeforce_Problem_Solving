#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        map<char,int>mp;
        int a=0;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
            char z=s[i];
            while(z==s[i])
            {
                i++;
            }
            i--;
            if(mp[z]>1)
            {
                a=1;
            }
        }
        if(a==1)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
}
