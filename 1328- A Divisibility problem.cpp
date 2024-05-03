#include<iostream>
using namespace std;
int main()
{
    int n,i,a,b;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(b>a)
        {
            cout<<b-a<<endl;
        }
        else if(a%b==0)
        {
            cout<<"0"<<endl;
        }
        else if(a%b!=0)
        {
           cout<<b-(a%b)<<endl;
        }
    }
}
