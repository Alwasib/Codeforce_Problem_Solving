#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,sum=0,ex=0,p=0,d=0,m=0;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        p=sum/n;
        for(int i=0;i<n;i++)
        {
            if(a[i]>p)
            {
                ex+=(a[i]-p);
            }
            else{
                d=(p-a[i]);
                if(ex>=d)
                {
                    ex=ex-d;
                }
                else{
                    m++;
                    break;
                }
            }
        }
        if(m==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

