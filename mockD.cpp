#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.size();i++)
    {
       if(s[i]=='3'||s[i]=='9')
       {
          continue;
       }
       else{
        c++;
        break;
       }
    }
    if(c==0)
    {
        cout<<"Yes"<<endl;
    }

    else{
        cout<<"No"<<endl;
    }
}


