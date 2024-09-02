#include<iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,c=0,d=0,sum=0,x=1;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       if(n==2&&a[0]==1&&a[1]==1||n==2&&a[0]==2&&a[1]==2)
       {
         cout<<"Yes"<<endl;
       }
       else if(n==2&&a[0]==1&&a[1]==2||n==2&&a[0]==2&&a[1]==1)
       {
           cout<<"No"<<endl;
       }
       else if(n%2==0)
       {
           for(int i=0;i<n;i++)
       {
           if(a[i]/1==1)
           {
               c++;
           }
           else if(a[i]/2==1)
           {
               d++;
           }
           sum=sum+a[i];
       }
       if(c==d&&sum%2==0)
       {
           cout<<"Yes"<<endl;
       }
       else if(sum%2==0)
       {
          cout<<"Yes"<<endl;
       }
       else{
        cout<<"No"<<endl;
       }

       }
       else
       {
           sum=sum+a[0];
           for(int i=1;i<n;i++)
       {
           if(a[i]==a[i-1])
           {
             x++;
           }
           sum=sum+a[i];
       }
       if(x==n)
       {
           cout<<"No"<<endl;

       }
       else if(sum%2==0)
       {
           cout<<"Yes"<<endl;
       }
       else{
        cout<<"No"<<endl;
       }

       }

   }
}
