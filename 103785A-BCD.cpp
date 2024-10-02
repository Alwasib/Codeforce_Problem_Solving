#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int c,p;
    c=n/k;
    p=n%k;
    if(p==0)
    {
        cout<<c<<endl;
    }
    else
    {
        cout<<c+1<<endl;
    }

}
