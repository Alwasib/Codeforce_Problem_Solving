#include<iostream>
using namespace std;
int main()
{
    int t,i,j,p;
    cin>>t;
    while(t--)
        {
         string s;
        char a;
         for(int i=0;i<8;i++)
         {
             for(j=0;j<8;j++)
             {
                cin>>a;
                if(a!='.')
             {
                 s=s+a;
             }
             }
         }
         cout<<s<<endl;

        }

}
