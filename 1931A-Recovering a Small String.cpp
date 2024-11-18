#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a=0;
        cin>>n;
        if(n>(2*26))
        {
            a=n-(2*26);
            cout<<(char)('a'+a-1)<<"zz"<<endl;
        }
        else
        {
            a=0;
           cout<<"a";
           n=n-1;
           if(n>26)
           {
              a=n-26;
               cout<<(char)('a'+a-1)<<"z"<<endl;
           }
           else
           {
               cout<<"a";
               n=n-1;
               cout<<(char)('a'+n-1)<<endl;
           }
        }
    }
}
