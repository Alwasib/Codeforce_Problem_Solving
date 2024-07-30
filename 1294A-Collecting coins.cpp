#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,n,sum=0,p=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {

        cin>>a>>b>>c>>n;
         sum=a+b+c+n;
        if(sum%3>=1)
        {
          cout<<"No"<<endl;
        }

        else
        {
            p=sum/3;
            if(a>p||b>p||c>p)
            {
              cout<<"No"<<endl;
            }
            else
            {
               cout<<"Yes"<<endl;
            }
            p=0;
            sum=0;
        }
    }
}
