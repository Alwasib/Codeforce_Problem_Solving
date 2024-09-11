#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,p;
        cin>>s;
        int l=0,c=0;
        l=s.size();
         if(l==1)
         {
             cout<<"NO"<<endl;
         }
         else {
                for(int i=0;i<l;i++)
                {
                    p=p+s[i];
                }
           for(int i=1;i<l;i++)
           {
               if(s[i]!=s[i-1])
               {
                   swap(s[i],s[i-1]);
               }
           }
           for(int i=0;i<l;i++)
           {
               if(s[i]!=p[i])
               {
                   c++;
               }
           }
          if(c>0)
          {
              cout<<"Yes"<<endl;
              cout<<s<<endl;
          }
          else{
            cout<<"NO"<<endl;
          }
         }

    }
}
