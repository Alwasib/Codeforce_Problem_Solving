#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,p,sum=0,c=0,d;
        cin>>n;
        string s;
        if(n%2050!=0)
        {
            cout<<"-1"<<endl;
        }
        else{
           p=n/2050;
        s=to_string(p);
        for(int i=0;i<s.size();i++)
        {
            c=p%10;
            d=p/10;
            sum=sum+c;
            c=0;
            p=0;
            p=d;
            d=0;
        }
        if(sum==0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
          cout<<sum<<endl;

        }
        }


    }
}
