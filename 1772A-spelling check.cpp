#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t,c=0;
    cin>>t;
     int i,n;
       string s;

   for(i=0;i<t;i++)
   {
       cin>>n;
       cin>>s;
       sort(s.begin(),s.end());
       if(n==5)
       {
       for(int j=0;j<n;j++)
       {
          c++;
       }
       if(s=="Timru")
       {
           cout<<"Yes"<<endl;
       }
       else
       {
           cout<<"No"<<endl;
       }
       }
       else
       {
          cout<<"No"<<endl;
       }
   }
}
