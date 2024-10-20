#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int a[3],c=0;

        for(int i=0;i<3;i++)
        {
           cin>>a[i];

        }
        sort(a,a+3);
       for(int i=0;i<5;i++)
       {
           if(a[0]<a[1]&&a[0]<a[2])
           {
               a[0]++;
           }
           else if(a[1]<a[0]&&a[1]<a[2])
           {
               a[1]++;
           }
           else if(a[2]<a[0]&&a[2]<a[1])
           {
               a[2]++;
           }
           else if(a[0]==a[1]&&a[0]<a[2])
           {
               a[0]++;
           }
           else if(a[0]==a[1]&&a[0]==a[2])
           {
               a[0]++;
           }
           else if(a[0]>a[1]&&a[1]==a[2])
           {
               a[1]++;
           }
       }
       cout<<a[0]*a[1]*a[2]<<endl;
    }
}
