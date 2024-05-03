#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<"I love ";
        }
        else if(i%2==1)
        {
            cout<<"I hate ";
        }
        if(n>0)
        {
         if(i==n)
         {
             cout<<"it ";
         }
         else
         {
             cout<<"that ";
         }

    }
    }
}
