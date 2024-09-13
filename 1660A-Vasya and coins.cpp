#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c=0;
        cin>>a>>b;
        if(a==0&&b==0)
        {
            cout<<1<<endl;
        }
        else if (a==0&&b>0)
        {
            cout<<1<<endl;
        }
        else
        {
            c=(a*1)+(b*2);
            cout<<c+1<<endl;
        }
    }
}
