#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a=0,b=0,tm=0;
        cin>>n;
        if(n%7==0)
        {
            cout<<n<<endl;
        }
        else
        {
           a=n%7;
           b=7-a;
           tm=n%10;
           if(b+tm>=10)
           {
               n=n-a;
           }
           else
           {
               n=n+b;
           }
          cout<<n<<endl;
        }
    }
}
