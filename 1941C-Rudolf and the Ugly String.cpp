#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p'||s[i]=='p'&&s[i+1]=='i'&&s[i+2]=='e')
            {
                c++;
                i=i+2;
            }
        }
        cout<<c<<endl;
    }
}
