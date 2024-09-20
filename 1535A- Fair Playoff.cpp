#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s1,s2,s3,s4;
        int a=0,b=0,c=0,d=0;
        cin>>s1>>s2>>s3>>s4;
        a=max(s1,s2);
        b=min(s1,s2);
        c=max(s3,s4);
        d=min(s3,s4);
        if(b>c)
        {
            cout<<"NO"<<endl;
        }
        else if(d>a)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
}
