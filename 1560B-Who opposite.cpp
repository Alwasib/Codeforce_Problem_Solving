#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int  a,b,c,dif;
      cin>>a>>b>>c;

      dif=abs(b-a);
      int mx=max(a,max(b,c));
      if(mx>dif*2) cout<<"-1"<<endl;
      else {
           if(c<=dif) cout<<c+dif<<endl;
           else cout<<c-dif<<endl;
      }
    }
}
