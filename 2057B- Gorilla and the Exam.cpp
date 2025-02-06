#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,c=0;
        cin>>n>>k;
        int a[n];
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        vector<int>v;
        for(auto i:mp)
        {
            v.push_back(i.second);
        }
        sort(v.begin(),v.end());
       c=v.size();
       if(k==0)
       {
           cout<<c<<endl;
       }
       else
       {
           for(int i=0;i<v.size();i++)
           {
              k=k-v[i];
              if(k<0)
              {
                  break;
              }
              c--;
           }
           int mx=max(c,1);
           cout<<mx<<endl;
       }
    }
}
