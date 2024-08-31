#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int l=0,sum=0;
        l=a.size();
        if(l>=3&&a[0]=='1'&&a[1]=='0'&&a[2]!='0')
        {

                   if(a[2]>='2'||a[2]>='1'&&a[3]>='0')
             {
                 cout<<"Yes"<<endl;
             }
             else
             {
                 cout<<"No"<<endl;
             }

             }

        else
             {
                 cout<<"No"<<endl;
             }

    }
}
