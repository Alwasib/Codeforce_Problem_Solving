#include<iostream>
using namespace std;
int main()
{
    int t,n,x,c=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        c=1;
        for(int i=3;i<=1000;i=i+x)
        {
           if(n<i)
           {

               break;
           }
           else if(n==i)
           {
               c++;
               break;
           }
           else if(n>i)
           {
               c++;
               continue;
           }
        }
        cout<<c<<endl;
    }
}
