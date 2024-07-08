#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np,x,y,z,m;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    x=k*l;
    y=x/nl;
    z=c*d;
    m=p/np;
    int v;
    v=min(min(y,z),m)/n;
    cout<<v;

}
