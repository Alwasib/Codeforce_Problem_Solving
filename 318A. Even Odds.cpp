#include<iostream>
using namespace std;
int main()
{
   long long int i,n,k,c=0,p=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            c++;
        }
        if(c==k)
        {
            cout<<i<<endl;
            p++;
             break;
        }

    }
    if(p==0)
    {
     for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            c++;
        }
        if(c==k)
        {
            cout<<i<<endl;
             break;
        }
    }
    }
}
