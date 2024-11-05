#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int n,sum=0;
        cin>>n;
       long long int a[n],b[n];
       vector<int>t;
       vector<int>w;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            if(b[i]>a[i])
            {
               t.push_back(b[i]);
               w.push_back(a[i]);
            }
            else{
               t.push_back(a[i]);
               w.push_back(b[i]);
            }
        }
        sort(t.begin(), t.end());
        sort(w.begin(), w.end());

        cout<<t[n-1]*w[n-1]<<endl;
    }
}
