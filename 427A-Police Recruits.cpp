#include<iostream>
using namespace std;
int main()
{
    int n,c=0,p=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
      for(int i=0;i<n;i++)
    {
        if(a[i]==-1&&p==0)
        {
            c++;
        }
        else
        {
            p=p+a[i];
        }
    }
       cout<<c;

}

