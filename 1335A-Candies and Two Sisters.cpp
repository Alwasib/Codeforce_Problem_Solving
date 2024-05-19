#include<iostream>
using namespace std;
int main()
{
   int i,n;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];

       if(a[i]==0||a[i]==1||a[i]==2)
       {
           cout<<"0"<<endl;
       }
       else
        {
        cout<<(a[i]-1)/2<<endl;
       }
   }
}
