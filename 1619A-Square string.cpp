#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,c,d;
        int l=0,p=0,x=0;
        cin>>s;
        l=s.size();
        if(l%2==1)
        {
            cout<<"No"<<endl;
        }
        else
        {
          p=l/2;
        for(int i=0;i<p;i++)
        {
            c=c+s[i];
        }
        for(int i=p;i<l;i++)
        {
            d=d+s[i];
        }

        if(c==d)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
           cout<<"No"<<endl;
        }

        }
    }
}


