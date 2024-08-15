#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a=0,b=0,sum=0,c=0,p=0,x=0;
        cin>>n;
        if(n==2)
        {
            cout<<"2"<<endl;
        }
        else
        {
          a=n/2;
          a=a-1;
          for(int i=1;i<=a;i++)
          {
             x=pow(2,i);
             sum=sum+x;
          }
          b=pow(2,n);
          sum=sum+b;
          for(int i=a+1;i<=n-1;i++)
          {
              c=pow(2,i);
              p=p+c;
          }
          cout<<sum-p<<endl;
        }

    }
}
