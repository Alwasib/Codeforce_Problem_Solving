#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,c=0,mx=0,ind=0,a=0,b=0,en=0;
        cin>>n>>m;
        char s[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {

                    cin>>s[i][j];
            }
        }
         for(int i=0;i<n;i++)
        {
            c=0;
            for(int j=0;j<m;j++)
            {
               if(s[i][j]=='#')
               {
                   c++;
               }
            }
            if(c>mx)
            {
                mx=c;
                ind=i;
            }
        }
        for(int i=ind;i<=ind;i++)
        {
            for(int j=0;j<m;j++)
            {

              if(s[i][j]=='#'&&a==0)
              {
                  b=j;
                  a++;
              }
               if(s[i][j]=='#')
              {
                 en=j;
              }
            }
        }
        c=0;
    for(int i=b;i<=en;i++)
    {
        c++;
    }
       ind=ind+1;
        if(c==1)
        {
            cout<<ind<<" "<<b+1<<endl;
        }
        else
         cout<<ind<<" "<<(c/2)+1+b<<endl;

    }
}
