#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)%2==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int d,e;
            d=(a+b);
            e=(a+b+c)/2;
            cout<<min(d,e)<<endl;
        }
    }
}
