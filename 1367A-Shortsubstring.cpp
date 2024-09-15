#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,p;
        cin>>s;
        int l=0;
        l=s.size();
        for(int i=0;i<l;i=i+2)
        {
            p=p+s[i];

        }
        p=p+s[l-1];
        cout<<p<<endl;
    }
}
