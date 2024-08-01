#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        string s,p;
        cin>>n;
        cin>>s>>p;
        for(i=0;i<n;i++)
        {
            if(s[i]==p[i])
            {
                continue;
            }
            else if(s[i]=='G'&&p[i]=='B'||s[i]=='B'&&p[i]=='G')
            {
                continue;
            }
            else
            {
                c++;
            }

        }
        if(c==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }
}
