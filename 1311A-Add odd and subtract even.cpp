#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c=0;
        cin>>a>>b;
        if(b==a)
        {
            cout<<"0"<<endl;
        }
        else if(b>a)
        {
            c=b-a;
            if(c%2==1)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }

        }
        else
        {
            c=a-b;
            if(c%2==1)
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }
    }
}
