#include<iostream>
using namespace std;
int main()
{
    int t,mn=0,mx=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        mn=a[0];
        mx=a[0];
        for(int i=1;i<n;i++)
        {
           if(a[i]>mx)
           {
               mx=a[i];
           }
           if(a[i]<mn)
           {
               mn=a[i];
           }
        }
        cout<<mx-mn<<endl;
        mn=0;
        mx=0;
    }
}
