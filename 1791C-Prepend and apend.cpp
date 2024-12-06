#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,d=0,sum=0;
        cin>>n;
          string s;
          cin>>s;
            d=n-1;
            sum=n;
            while(c<d&&s[c]!=s[d])
            {
               c++;
              d--;
              sum=sum-2;
            }
             cout<<sum<<endl;
    }
}
