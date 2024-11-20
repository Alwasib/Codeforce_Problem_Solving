#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    while(n--)
    {
        string s;
        int p;
        cin>>s>>p;
        if(s=="P")
        {
            sum=sum+p;
        }
        else if(s=="B")
        {
            if(sum<p)
            {
                cout<<"YES"<<endl;
                sum=0;
            }
            else
            {
                cout<<"NO"<<endl;
                sum=sum-p;
            }
        }
    }
}
