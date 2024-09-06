#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int i;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int cnt=1;
        int l=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]!=l)
                cnt++;
                l=a[i];

        }
        cout<<cnt<<endl;
    }
    return 0;
}

