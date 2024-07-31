#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int c=0,p=0;
        cin>>n;
        p=2*n;
        int a[p];
        for(int i=0;i<p;i++)
        {
            cin>>a[i];
            if(a[i]%2==1)
            {
                c++;
            }
        }
        if(c==n)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }
}
