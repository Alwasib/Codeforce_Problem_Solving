#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=2;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
            {
               c++;
            }
            else{
                c=c+2;
            }
        }
        cout<<c<<endl;
    }
}
