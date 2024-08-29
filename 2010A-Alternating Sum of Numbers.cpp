#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
         if(n==1)
         {
            for(int i=0;i<1;i++)
        {
            cout<<a[i]<<endl;
        }
         }
         else if(n==2)
         {
           for(int i=0;i<1;i++)
        {
            cout<<a[i]-a[i+1]<<endl;
        }
         }
         else
         {
            sum=a[0]-a[1];

         for(int i=1;i<n-1;i++)
        {

            if(i%2==1)
            {
                sum=sum+a[i+1];

            }
            else if(i%2==0)
            {
              sum=sum-a[i+1];

            }
        }
        cout<<sum<<endl;
    }
}
}

