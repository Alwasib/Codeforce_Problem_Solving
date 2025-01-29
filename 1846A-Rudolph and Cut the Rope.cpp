#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
        }
        for(int i=0;i<n;i++)
        {
           if(a[i]>b[i])
           {
               c++;
           }
        }
        cout<<c<<endl;
    }
}
