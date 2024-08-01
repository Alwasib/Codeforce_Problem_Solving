#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mx=1,c=1, mxidx=0,p=0;
    for(int i=1;i<n;i++)
      {
          if(a[i]>a[i-1])
          {
              c++;
          }
          else
          {
              if(mx<c)
          {
              mx=c;
              mxidx=i-mx;

          }
          c=1;
          }

      }
      if(mx<c)
      {
          mx=c;
          mxidx=n-mx;
      }
        for(int i=mxidx;i<mx+mxidx;i++)
        {
            p++;
        }
        cout<<p<<endl;

    }
