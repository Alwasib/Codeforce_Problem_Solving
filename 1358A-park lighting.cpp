#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,a=0,c=0;
        cin>>n>>m;
        if(n%2==0&&m%2==0)
        {
           a=m/2;
           cout<<a*n<<endl;
        }
        else if(n%2==1&&m%2==0)
        {
            a=m/2;
            cout<<a*n<<endl;
        }
        else if(n%2==0&&m%2==1)
        {
            a=n/2;
            cout<<a*m<<endl;
        }
         else
        {

            cout<<n*(m/2)+n/2+1<<endl;
        }
    }
}
