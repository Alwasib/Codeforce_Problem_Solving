#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p=0,c=0,m=0,r=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        if(n==1)
        {
            cout<<a[0]+1<<endl;
        }
        else
        {
           sort(a,a+n);
       a[0]=a[0]+1;
       m=a[0];
       r=a[1];
       p=m*r;

       for(int i=2;i<n;i++)
        {
          p=p*a[i];
          c=c+p;
          p=c;
          c=c-c;
        }
        cout<<p<<endl;

        }


    }
}
