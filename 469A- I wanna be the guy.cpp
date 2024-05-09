#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,p,q,a[1000];
    cin>>n;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>a[i];

    }
    cin>>q;
    for(int i=p;i<p+q;i++)
    {
        cin>>a[i];
    }
    sort(a,a+p+q);
     for(int i=0;i<p+q;i++)
    {
        if(a[i]!=a[i+1])
        {
            c++;
        }

    }

    if(c==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<< "Oh, my keyboard!"<<endl;
    }
}
