#include<iostream>
using namespace std;
int main()
{
    int t,b,a,mx=0,mn=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a==b)
        {
            cout<<(a*b)*4<<endl;
        }
        else
        {
        if(a>b)
        {
            mx=a;
            mn=b;
        }
        else if(a<b)
        {
            mx=b;
            mn=a;
        }

        if(mx>=(2*mn))
        {
            cout<<mx*mx<<endl;
        }

        else
        {
            cout<<(2*mn)*(2*mn)<<endl;
        }
        mx=0;
        mn=0;
        }
    }
}
