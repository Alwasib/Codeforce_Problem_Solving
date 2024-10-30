#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
    int sum=0,d=2;
    cin>>n;
    if(n==1)
    {
        sum=2;
    }
    else
    {
    for(int i=2;i<=n;i++)
    {
        sum=d*2;
        d=sum;
    }

    }
    cout<<sum-1<<endl;
    }
}
