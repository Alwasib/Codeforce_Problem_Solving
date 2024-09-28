#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[0])
            {
                c++;
                a[i]=a[i]+1;
            }
            else
            {
                continue;
            }
        }
        cout<<c<<endl;
    }

}
