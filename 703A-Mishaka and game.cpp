#include<iostream>
using namespace std;
int main()
{
    int n,i,m,c,p=0,d=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m>>c;
        if(m>c)
        {
          p++;
        }
        else if(m==c)
        {
            continue;
        }
        else if(m<c)
        {
            d++;
        }
    }
    if(p>d)
    {
        cout<<"Mishka"<<endl;
    }
    else if(p==d)
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    else
    {
       cout<<"Chris"<<endl ;
    }
}
