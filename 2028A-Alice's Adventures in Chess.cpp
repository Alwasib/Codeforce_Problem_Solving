#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,x=0,y=0,d=0;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        for(int i=0;i<20;i++)
        {
       for(int j=0;j<n;j++)
       {

        if(s[j]=='N')
        {
            y++;
        }
         else if(s[j]=='S')
        {
            y--;
        }
        else if(s[j]=='E')
        {
            x++;
        }

         else if(s[j]=='W')
        {
            x--;
        }
        if(x==a&&y==b)
        {
            cout<<"YES"<<endl;
            d++;
            break;
        }
    }
         if(d==1)
         {
             break;
         }
        }
        if(d==0)
            cout<<"NO"<<endl;
    }
}
