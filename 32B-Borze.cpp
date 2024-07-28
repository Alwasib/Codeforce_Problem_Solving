#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size();

    for(int i=0;i<l;i++)
    {
          if(s[i]=='.')
        {
            cout<<"0";
        }
         else if(s[i+1]=='.')
        {
            cout<<"1";
            i++;
        }

         else if(s[i+1]=='-')
        {
            cout<<"2";
            i++;
        }
    }
}
