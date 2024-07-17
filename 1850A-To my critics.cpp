#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if(a+b>=10)
        {
            cout<<"Yes"<<endl;
        }
        else if(a+c>=10)
        {
            cout<<"Yes"<<endl;
        }
        else if(b+c>=10)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
