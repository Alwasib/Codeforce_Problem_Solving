#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n=4,x1,x2,x3;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[0]==a[1])
    {
   x2=a[3]-a[2];
   x1=a[3]-a[1];
   x3=a[3]-a[0];
   cout<<x2<<" "<<x1<<" "<<x3;

    }
  else
  {
      x2=a[3]-a[2];
   x1=a[3]-a[1];
   x3=a[3]-a[0];
   cout<<x1<<" "<<x2<<" "<<x3;
  }


}
