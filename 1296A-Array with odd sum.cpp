#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b=0,c=0,sum=0;
        cin>>n;
        int a;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            sum=sum+a;

       if(a%2==1)
       {
          b++;
       }
       else if(a%2==0)
       {
          c++;
       }
        }
        if(sum%2==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            if(b>=1&&c>=1)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                 cout<<"No"<<endl;
            }
        }
    }
}
