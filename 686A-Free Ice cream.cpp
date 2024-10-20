#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,d,c=0;
    cin>>n>>d;
   long long int a[n];
    char ch;
    for(int i=0;i<n;i++)
    {
      cin>>ch>>a[i];
      if(ch=='+')
         {
          d=d+a[i];
         }
       else
       {
           if(a[i]<=d)
           {
               d=d-a[i];
           }
           else
           {
               c++;
           }
       }
    }
    cout<<d<<" "<<c<<endl;
}
