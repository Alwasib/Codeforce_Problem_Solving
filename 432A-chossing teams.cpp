#include<iostream>
using namespace std;
int main()
{
    int n,k,c=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<5)
        {
            if(5-a[i]>=k)
            {
                c++;
            }
        }
    }
    if(c>=3)
    {
        cout<<c/3<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
}
