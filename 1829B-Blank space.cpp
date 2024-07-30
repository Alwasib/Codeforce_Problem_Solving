#include<iostream>
using namespace std;
int main()
{
    int t,n,a;
    cin>>t;
    while(t--)
    {
        int c=0,maxi=0;
        cin>>n;
        int a;
        for(int i=0;i<n;i++)
        {
          cin>>a;
          if(a==1)
          {
              c=0;
          }
          else
          {
              c++;
              maxi=max(c,maxi);
          }
        }
          cout<<maxi<<endl;
    }
}
