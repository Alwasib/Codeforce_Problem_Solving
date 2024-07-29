#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,c=0,d=0;
    cin>>t;
    string s;


    while(t--)
    {
        cin>>s;
        for(int i=0;i<5;i++)
        {
            if(s[i]=='A')
            {
                c++;
            }
            else
            {
                d++;
            }
        }
        if(c>d)
        {
            cout<<"A"<<endl;
        }
        else
        {
            cout<<"B"<<endl;
        }
        c=0;
        d=0;
    }
}
