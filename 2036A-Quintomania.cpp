#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d=0,c=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++)
        {
            c=abs(a[i]-a[i+1]);
            if(c==5||c==7)
            {
                continue;
            }
            else
            {
                d++;
            }
            c=0;
        }
      if(d==0)
      {
          cout<<"Yes"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
    }
}
