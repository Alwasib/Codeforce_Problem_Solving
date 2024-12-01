#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,c=0,in=0,en=0;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(int i=0;i<n;i++)
       {
           if(a[i]==1&&c==0)
           {
               in=i;
               c++;
           }
           else if(a[i]==1)
           {
               en=i;
           }
       }
       c=0;
       for(int i=in;i<=en;i++)
       {
          if(a[i]==0)
          {
              c++;
          }
       }
       cout<<c<<endl;
   }
}
