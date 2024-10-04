#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0,n,p=1,d=1,st=1;
        cin>>n;
            while(st<=n)
            {
               c++;
               st=st+d;
               if(p==9)
               {
                   p=1;
                   d=d*10;
                   st=d;
                   continue;
               }
               p++;

            }
            cout<<c<<endl;
        }
    }

