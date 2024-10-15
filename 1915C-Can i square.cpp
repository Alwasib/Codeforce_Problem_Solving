#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long n,c=0;
        long long  sum=0,a;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            sum=sum+a;
        }
        long long k=sqrt(sum);
        if(k*k==sum)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}


