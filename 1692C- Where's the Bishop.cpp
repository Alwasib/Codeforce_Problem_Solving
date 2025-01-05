#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[8][8];
        int in=0,en=0;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                if(a[i][j]=='#'&&a[i+1][j-1]=='#'&&a[i+1][j+1]=='#')
                {
                   in=i;
                   en=j;
                   break;
                }
            }
        }
        cout<<in+1<<" "<<en+1<<endl;

    }
}
