#include<iostream>
using namespace std;
int main()
{
    int t,i,x,sum=0,c=0,p=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
      cin>>x;
        p=x;
        sum=x%10;
        while(x>0)
        {
            x=x/10;
            c++;
        }
         if(c==1)
         {
             cout<<((sum*10)-10)+1<<endl;
             c=0;
         }
         else if(c==2)
         {
             cout<<((sum*10)-10)+3<<endl;
             c=0;
         }
         else if(c==3)
         {
             cout<<((sum*10)-10)+6<<endl;
             c=0;
         }
         else if(c==4)
         {
             cout<<((sum*10)-10)+10<<endl;
             c=0;
         }
    }
}
