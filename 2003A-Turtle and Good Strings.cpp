#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        string s;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[0]==s[n-1])
            {
                c++;
            }

        }
        if(c>0)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
}
