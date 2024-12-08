#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int sum=0;
        sum=(a*1)+(b*2);

        if(sum%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {

            if(a%2==0&&b%2==0)
            {
                cout<<"YES"<<endl;
            }
            else if(a%2==0&&b%2==1&&b>1&&a!=0)
            {
                cout<<"YES"<<endl;
            }
             else if(a%2==0&&b==1&&a!=0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
