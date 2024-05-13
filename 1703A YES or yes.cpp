#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int n,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        c=0;
        if(s[0]=='Y'||s[0]=='y')
        {
            c++;
        }
       if(s[1]=='E'||s[1]=='e')
        {
           c++;
        }
          if(s[2]=='S'||s[2]=='s')
        {
           c++;
        }
        if(c==3)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

    /* for(int i=0;i<n;i++)
    {
        if(s[i]=='Y'||s[i]=='y')
        {
            c++;
        }
    }*/


}
