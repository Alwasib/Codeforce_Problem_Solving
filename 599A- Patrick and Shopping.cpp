#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,d2,d3,sum=0,c=0,a=0,b=0;
    cin>>d1>>d2>>d3;
    c=(d1+d2+d3);
    sum=(2*d1)+(2*d2);
    a=(2*d1)+(2*d3);
    b=(2*d2)+(2*d3);
    int ar[4];
    ar[0]=c;
    ar[1]=sum;
    ar[2]=a;
    ar[3]=b;
    sort(ar,ar+4);
     cout<<ar[0]<<endl;
}
