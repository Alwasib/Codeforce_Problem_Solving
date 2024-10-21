#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int x=0,y=0;
        x=a.size();
        y=b.size();
        if(a==b)
        {
            cout<<"="<<endl;
        }
        else if(a[x-1]=='S'&&b[y-1]=='S')
        {
            if(x>y)
            {
                cout<<"<"<<endl;
            }
            else{
                cout<<">"<<endl;
            }
        }
        else if(a[x-1]=='S'&&b[y-1]=='M')
        {
            cout<<"<"<<endl;
        }
        else if(a[x-1]=='M'&&b[y-1]=='S')
        {
            cout<<">"<<endl;
        }
        else if(a[x-1]=='S'&&b[y-1]=='L')
        {
            cout<<"<"<<endl;
        }
        else if(a[x-1]=='L'&&b[y-1]=='S')
        {
            cout<<">"<<endl;
        }
        else if(a[x-1]=='M'&&b[y-1]=='L')
        {
            cout<<"<"<<endl;
        }
        else if(a[x-1]=='L'&&b[y-1]=='M')
        {
            cout<<">"<<endl;
        }
         else if(a[x-1]=='L'&&b[y-1]=='L')
        {
            if(x>y)
            {
                cout<<">"<<endl;
            }
            else{
                cout<<"<"<<endl;
            }
        }
         else if(a[x-1]=='M'&&b[y-1]=='M')
        {
            if(x>y)
            {
                cout<<">"<<endl;
            }
            else{
                cout<<"<"<<endl;
            }
        }

    }
}
