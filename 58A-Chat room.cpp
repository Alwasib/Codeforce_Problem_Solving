#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s,a="hello";
    cin>>s;int f=0,j=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==a[j])
        {
            f++;
            j++;
        }

    }
    if(f==5)
        cout<<"YES";
    else
        cout<<"NO";
}
int main()
{
    solve();
}
