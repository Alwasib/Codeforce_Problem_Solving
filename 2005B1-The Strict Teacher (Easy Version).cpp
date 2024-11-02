#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,q,m1,m2,q1,mid=0;
        int c=0,d=0;
        cin>>n>>m>>q;
        cin>>m1>>m2;
        cin>>q1;
        if(m1<m2)
        {
        if(q1>m1&&q1>m2)
        {
            cout<<n-m2<<endl;
        }
        else if(q1<m1&&q1<m2)
        {
            cout<<m1-1<<endl;
        }
        else
        {
            mid=(m1+m2)/2;
            c=abs(mid-m1);
            d=abs(mid-m2);
            cout<<min(c,d)<<endl;
        }
        }
        else
        {
            int tmp;
            tmp=m1;
            m1=m2;
            m2=tmp;

            if(q1>m1&&q1>m2)
        {
            cout<<n-m2<<endl;
        }
        else if(q1<m1&&q1<m2)
        {
            cout<<m1-1<<endl;
        }
        else
        {
            mid=(m1+m2)/2;
            c=abs(mid-m1);
            d=abs(mid-m2);
            cout<<min(c,d)<<endl;
        }
        }
    }
}
