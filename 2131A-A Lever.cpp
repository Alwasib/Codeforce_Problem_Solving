#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=1,d=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
         for(int i=0;i<n;i++)
        {
            cin>>b[i];

        }

         for(int i=0;i<n;i++)
         {
             if(a[i]>b[i])
             {
                 d=a[i]-b[i];
                 c=c+d;
                 d=0;
             }
         }
         cout<<c<<endl;

    }
    }

