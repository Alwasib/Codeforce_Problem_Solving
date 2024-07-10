#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0;
    cin>>t;
    read:
    while(t--)
    {
        int i,n,d=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=1;i<n;i++)
        {
          if(a[i]-a[i-1]>1)
          {
              cout<<"No"<<endl;
             goto read;
          }
        }
           cout<<"Yes"<<endl;
          }
    }

