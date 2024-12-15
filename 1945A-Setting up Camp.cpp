#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int a,b,c,d=0,n=0,e=0,p=0;
        cin>>a>>b>>c;
        d=d+a;
        n=b%3;
        d=d+(b/3);
        if(n>0)
        {

            e=3-n;
            if(c>=e)
            {
                c=c-e;
                d++;
            }
            else
            {
                cout<<"-1"<<endl;
                p++;
            }

        }
        e=c%3;
        d=d+(c/3);
        if(e>0)
        {
            d++;
        }
        if(p==0)
        {
        cout<<d<<endl;
        }

    }
}
