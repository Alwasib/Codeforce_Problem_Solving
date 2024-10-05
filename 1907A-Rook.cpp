#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       string s;
       string x={'a','b','c','d','e','f','g','h'};
        string y={'1','2','3','4','5','6','7','8'};
       cin>>s;
      for(int i=0;i<8;i++)
       {
          if(x[i]==s[0])
          {
              continue;
          }
          else{
            cout<<x[i]<<s[1]<<endl;
          }
       }
       for(int i=0;i<8;i++)
       {
           if(s[1]==y[i])
           {
               continue;
           }
           else{
            cout<<s[0]<<i+1<<endl;
           }

       }
    }
}
