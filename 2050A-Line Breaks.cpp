#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,sum=0,c=0;
        cin>>n>>m;
        string s;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            sum=sum+s.size();
            if(sum>m)
            {
                continue;
            }
            else{
                 c++;
            }

        }
        cout<<c<<endl;
    }
}
