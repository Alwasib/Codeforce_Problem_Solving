#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,p=0,c=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
            for(int i=0;i<n;i++)
            {
                if(a[i]>=k)
                {
                    p=p+a[i];
                }
               else if(a[i]==0&&p>0)
                {
                   p--;
                   c++;
                }
            }
            cout<<c<<endl;

}
}
