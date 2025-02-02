#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,c=0;
        cin>>x>>y;
        while(x>0||y>0)
        {
            if(y>=2)
            {
                y=y-2;
                x=x-7;
                c++;
            }
            else if(y==1)
            {
                y=y-1;
                x=x-11;
                c++;
            }
            else
            {
                x=x-15;
                c++;
            }
        }
        cout<<c<<endl;
    }
}
