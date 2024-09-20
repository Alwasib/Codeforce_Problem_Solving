#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        int r=9;
        int  a[9],p=0;
        cin>>s;
        for(int i=0;i<9;i++)
        {
            if(s>=r)
            {
                s=s-r;
                a[p++]=r;
                r--;
            }
            else{
                r--;
            }

        }
        for(int i=p-1;i>=0;i--)
        {
            cout<<a[i];
        }

       cout<<endl;

    }
}
