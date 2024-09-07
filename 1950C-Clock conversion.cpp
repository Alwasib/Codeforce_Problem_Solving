#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int h,c=0;
        cin>>h;
        cin>>s;

        if(h==0)
        {
            cout<<"12:"<<s[1]<<s[2]<<" AM"<<endl;
        }
        else if(h<12)
        {
            if(h<10)
            {
                cout<<0<<h<<":"<<s[1]<<s[2]<<" AM"<<endl;
            }
            else
            {
                cout<<h<<":"<<s[1]<<s[2]<<" AM"<<endl;
            }

        }
        else if(h==12)
        {
            cout<<"12:"<<s[1]<<s[2]<<" PM"<<endl;
        }
        else if(h>12)
        {
        c=h-12;
        if(c<10)
            {
                cout<<0<<c<<":"<<s[1]<<s[2]<<" PM"<<endl;
            }
            else
            {
                cout<<c<<":"<<s[1]<<s[2]<<" PM"<<endl;
            }

        }

    }
}
