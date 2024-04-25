#include<iostream>
using namespace std;
int main()
{
    int i,n,a,b,c,p=0,d=1,x=0,y=0,z;
    cin>>n;
    for(i=0;i<n;i++)
    {
       cin>>a>>b>>c;
       if(a==d&&b==d)
       {
           p++;
       }
       else if(b==d&&c==d)
       {
           x++;
       }
       else if(a==d&&c==d)
       {
           y++;
       }
    }
    z=p+x+y;
    cout<<z;
    return 0;
}
