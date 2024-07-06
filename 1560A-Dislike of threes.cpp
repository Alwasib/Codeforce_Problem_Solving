#include<iostream>
using namespace std;
int main()
{
    int t;
   cin>>t;
    while(t--)
   {

       int i=1,c=0;
       int k;
        cin>>k;
      while(1)
      {
          if(i%3!=0&&i%10!=3)
          {
             c++;
          }
          if(c==k)
          {
              cout<<i<<endl;
              break;
          }
          i++;
      }
   }
}
