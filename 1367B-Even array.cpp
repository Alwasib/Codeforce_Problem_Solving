#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,e=0,o=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(i%2==0&&a[i]%2!=0)
            {
                e++;
            }
            else if(i%2==1&&a[i]%2!=1)
            {
               o++;
            }
        }
        if(e==o)
        {
            cout<<e<<endl;
        }
        else if(e==0&&o==0)
        {
            cout<<0<<endl;
        }
        else if(e!=o)
        {
            cout<<"-1"<<endl;
        }


            }
}
