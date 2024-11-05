#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int n,sum=0;
        cin>>n;
      long long  int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sum=a[0]*a[1];
         for(int i=1;i<n-1;i++)
        {
            if(a[i]*a[i+1]>sum)
            {
                sum=0;
                sum=a[i]*a[i+1];
            }
        }
        cout<<sum<<endl;
    }
}
