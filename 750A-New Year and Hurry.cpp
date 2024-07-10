#include<iostream>
using namespace std;
int main()
{
    int n,k,sum=0,c=0,a,d=0;
    cin>>n>>k;
    a=240-k;
    for(int i=0;i<n;i++)
    {
        sum=sum+5;
        c=c+sum;
        if(c>a)
            break;
        else
           d++;
    }
   cout<<d;
    }

