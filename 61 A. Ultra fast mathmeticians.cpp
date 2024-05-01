#include<iostream>
#include<string>
using namespace std;
int main()
{
    int l,i;
  string s,t;
  cin>>s;
  cin>>t;
  l=s.size();
  for(i=0;i<l;i++)
  {
      if(s[i]==t[i])
      {
          cout<<"0";
      }
      else
      {
          cout<<"1";
      }
  }
}
