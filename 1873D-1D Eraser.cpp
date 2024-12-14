#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,c=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                c++;
                i+=k-1;
            }
        }
        cout<<c<<endl;
    }

}
