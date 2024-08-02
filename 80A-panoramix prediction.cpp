
#include<iostream>
using namespace std;
int main()
{
    int n,m,c=0,p=0,a=0,l=0,s=0;
    cin>>n>>m;
    n=n+1;
    for(int i=2;i<m;i++)
    {
        if(m%i==0)
        {
           s++;
        }
    }
    if(s==0)
    {
    for(int i=n;i<=m;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
           l++;
        }
        c=0;
    }
    if(l==1)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    else{
        cout<<"NO"<<endl;
    }

}
