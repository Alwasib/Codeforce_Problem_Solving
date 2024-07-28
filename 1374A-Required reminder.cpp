#include<iostream>
using namespace std;
int main()
{
    int t,x,y,n,a=0,b=0,c=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        a=0;
        b=0;
        c=0;
        cin>>x>>y>>n;
        a=n-y;
        b=a/x;
        c=(b*x)+y;
        cout<<c<<endl;

    }

}
