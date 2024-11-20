#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int p=s.size();
    int c=0;
    string a,b;
    for(int i=0;i<p/2;i++)
    {
        a=a+s[i];
    }
    for(int i=p-1;i>=p/2;i--)
    {
        b=b+s[i];
    }
     for(int i=0;i<p/2;i++)
    {
       if(a[i]==b[i])
       {
           continue;
       }
       else{
        c++;
        break;
       }
    }
    if(c==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
