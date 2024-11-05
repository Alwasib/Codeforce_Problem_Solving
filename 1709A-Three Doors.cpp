#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int a,b,c;
        cin>>a>>b>>c;
        if(x==1&&a==3&&c==2||x==1&&a==2&&b==3)
        {
            cout<<"YES"<<endl;
        }
        else if(x==3&&b==1&&c==2||x==3&&c==1&&a==2)
        {
             cout<<"YES"<<endl;
        }
        else if(x==2&&a==3&&b==1||x==2&&b==3&&c==1)
        {
             cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
