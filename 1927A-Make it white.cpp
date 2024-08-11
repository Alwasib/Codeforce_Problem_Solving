#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,loc=0,f=0,p=0,d=0;
        string s;
        cin>>n;
        cin>>s;
        if(n==1)
        {
            if(s=="W")
            {
                cout<<"0"<<endl;
            }
            else
            {
                cout<<"1"<<endl;
            }
        }
        else if(n==2)
        {
            if(s[0]=='W'&&s[1]=='B')
            {
                cout<<"1"<<endl;
            }
            else if(s[0]=='B'&&s[1]=='W')
            {
                cout<<"1"<<endl;
            }
            else if(s[0]=='B'&&s[1]=='B')
            {
                cout<<"2"<<endl;
            }
            else
            {
                cout<<"0"<<endl;
            }
        }
        else
        {
        for(int i=0;i<n;i++)
        {

            if(s[i]=='B'&&c==0)
            {
              c++;
              f=i+1;
            }
            else if(s[i]=='B'&&c>=1)
            {
                c++;
                loc=i+1;
            }
        }
        if(f>=1&&loc==0)
        {
            cout<<1<<endl;
        }
        else if(f==0&&loc==0)
        {
           cout<<0<<endl;
        }
        else
        {
           for(int i=f;i<=loc;i++)
           {
               p++;
           }
           cout<<p<<endl;
        }


        }
    }
}
