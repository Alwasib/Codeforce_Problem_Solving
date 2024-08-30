#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a1,a2,a3,a4,b1,b2,b3,b4,x=0,y=0;
        cin>>a1>>b1;
        cin>>a2>>b2;
        cin>>a3>>b3;
        cin>>a4>>b4;

        if(a1==a2)
        {
         x=b1-b2;
         cout<<x*x<<endl;
        }
        else if(a1==a3)
        {
         x=b1-b3;
         cout<<x*x<<endl;
        }
        else if(a1==a4)
        {
         x=b1-b4;
         cout<<x*x<<endl;
        }
        else if(a2==a3)
        {
         x=b2-b3;
         cout<<x*x<<endl;
        }
        else if(a2==a4)
        {
         x=b2-b4;
         cout<<x*x<<endl;
        }
        else if(a3==a4)
        {
         x=b3-b4;
         cout<<x*x<<endl;
        }

        }






    }

