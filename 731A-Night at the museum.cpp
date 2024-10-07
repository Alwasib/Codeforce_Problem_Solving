#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    int c=0,a,b,d;
    char z='a';
    for(int i=0;i<s.size();i++)
    {
        a=s[i]-z;
        if(a<0)
        {
            a=a*(-1);
        }
        b=26-a;
        d=min(a,b);
        c=c+d;
        z=s[i];
    }
    cout<<c;
}
