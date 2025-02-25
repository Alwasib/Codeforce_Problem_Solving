#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,k,p,sum=0,c=0,d=0;
        cin>>n>>k>>p;
        if(k==0)
        {
            cout<<0<<endl;
        }
        else
        {
        for(int i=0;i<n;i++)
        {
            c++;
           if(k<0)
           {
               k=k+p;
               if(k>=0)
               {
                   cout<<c<<endl;
                   d++;
                   break;
               }
           }
           else
           {
               sum=sum+p;
               if(sum>=k)
               {
                    cout<<c<<endl;
                    d++;
                   break;
               }
           }
        }
        if(d==0)
        {
             cout<<"-1"<<endl;
        }
        }


    }
}
