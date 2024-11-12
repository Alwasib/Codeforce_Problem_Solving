#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,c=1,d=1;
        cin>>l>>r;
        for(int i=l+1;i<=r;i++)
        {
            c++;
            i=i+d;
            d++;
        }
        cout<<c<<endl;
    }
}
