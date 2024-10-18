#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x[3],a=0,b=0;
        for(int i=0;i<3;i++)
        {
            cin>>x[i];
        }
        sort(x,x+3);
        a=x[1]-x[0];
        b=x[2]-x[1];
        cout<<a+b<<endl;
    }
}
