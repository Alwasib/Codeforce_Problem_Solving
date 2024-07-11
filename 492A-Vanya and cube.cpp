#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0,p=0,c=0;;
    cin>>n;
    for(i=1;i<=10000;i++)
    {
        sum=sum+i;
        p=p+sum;
        if(p<=n)
        {
            c++;
        }
        else
            break;
    }
    cout<<c;
}
