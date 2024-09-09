#include<iostream>
using namespace std;
 int main()
 {
     int n,mx=0,mn=0,c=0;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     mx=a[0];
     mn=a[0];
     for(int i=1;i<n;i++)
     {
        if(a[i]>mx)
        {
            mx=a[i];
            c++;
        }
       else if(a[i]<mn)
        {
            c++;
            mn=a[i];
        }
     }
     cout<<c<<endl;
 }
