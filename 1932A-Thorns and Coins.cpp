#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*'&&s[i+1]=='*')
            {
                break;
            }
            else if(s[i]=='@')
            {
                c++;
            }
        }

            cout<<c<<endl;
        }

    }

