#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int a=0,b=0,c=0;
        for(int i=0;i<3;i++)
        {
            cin>>s;
            if(s[0]=='?'||s[1]=='?'||s[2]=='?')
            {
                for(int j=0;j<3;j++)
                {
                    if(s[j]=='A')
                    {
                        a++;
                    }
                    else if(s[j]=='B')
                    {
                        b++;
                    }
                    else
                    {
                        c++;
                    }

                }
            }
        }
        if(a==0)
        {
            cout<<"A"<<endl;
        }
        else if(b==0)
        {
            cout<<"B"<<endl;
        }
        else
        {
            cout<<"C"<<endl;
        }
    }
}
