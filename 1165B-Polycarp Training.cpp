#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=c+1)
        {
            c++;

        }
    }
   cout<<c<<endl;

}
