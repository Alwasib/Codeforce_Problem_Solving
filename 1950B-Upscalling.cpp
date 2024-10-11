#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,p;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                s=s+"##";
                p=p+"..";
            }
            else
            {
                p=p+"##";
                s=s+"..";
            }
        }
        s=s+"\n"+s;
        p=p+"\n"+p;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                cout<<s<<endl;
            }
            else
            {
                cout<<p<<endl;
            }
        }
    }
}
