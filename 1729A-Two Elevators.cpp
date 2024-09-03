#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,x=0,y=0;
        cin>>a>>b>>c;
        x=abs(a-1);
        y=abs(b-c)+(c-1);
        if(x==y)
        {
            cout<<"3"<<endl;
        }
        else if(x<y)
        {
            cout<<"1"<<endl;
        }
        else if(y<x)
        {
            cout<<"2"<<endl;
        }
    }
}
