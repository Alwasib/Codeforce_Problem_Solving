#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int n;
        cin>>n;
       if(n<15)
       {
            if(n==0)
        {
            cout<<1<<endl;
        }
        else if(n==1)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<3<<endl;
        }
       }
       else{
        long long int m=n/15;
        m=m*3;
        if(n%15==0)
        {
            cout<<m+1<<endl;
        }
        else if(n%15==1)
        {
            cout<<m+2<<endl;
        }
        else{
             cout<<m+3<<endl;
        }

       }

    }
}
