#include<iostream>
using namespace std;
int main()
{
    int a ,b,ans,c=0;
    cin>>a>>b;
    if(a>b)
    {
       ans=a-b;
       for(int i=1;i<=ans;i++)
       {
           if(i%2==0)
           {
               c++;
           }
       }
       cout<<b<<" "<<c;
    }
   else if(a<b)
    {
       ans=b-a;
       for(int i=1;i<=ans;i++)
       {
           if(i%2==0)
           {
               c++;
           }
       }
        cout<<a<<" "<<c;
    }
   else
    {
       cout<<b<<" "<<0;
    }
}
