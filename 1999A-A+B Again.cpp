#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a=0,b=0;
       cin>>n;
       a=n/10;
       b=n%10;
       cout<<a+b<<endl;
    }
}
