#include<bits/stdc++.h>
#include<algorithm>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int a[51]={0},p;
         int n;
         cin>>n;
         for(int i=0;i<(2*n);i++)
         {
             cin>>p;
             if(a[p]==0)
             {
                 cout<<p<<" ";
                 a[p]++;
             }
         }
         cout<<endl;
    }
}
