#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x>y)
        {
            cout<<y<<" "<<x<<endl;
        }
        else if(x<y)
        {
          cout<<x<<" "<<y<<endl;
        }
        else{
            cout<<x<<" "<<y<<endl;
        }
    }
}
