#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
       if(a>b&&a>c)
       {
           cout<<"0 "<<(a-b)+1<<" "<<(a-c)+1<<endl;
       }
          else    if(b>a&&b>c)
       {
           cout<<(b-a)+1<<" 0 "<<(b-c)+1<<endl;
       }
          else    if(c>b&&c>a)
       {
           cout<<(c-a)+1<<" "<<(c-b)+1<<" 0"<<endl;
       }
       else if(a==b&&a==c)
       {
           cout<<"1"<<" 1 "<<"1"<<endl;
       }
       else if(a==b&&a>c)
       {
           cout<<"1 "<<"1 "<<(a-c)+1<<endl;
       }
       else if(a==c&&a>b)
       {
           cout<<"1 "<<(a-b)+1<<" 1"<<endl;
       }
       else if(b==c&&b>a)
       {
           cout<<(b-a)+1<<" 1"<<" 1"<<endl;
       }
        else if(a==b&&c>a)
       {
           cout<<(c-b)+1<<" "<<(c-a)+1<<" 0"<<endl;
       }
       else if(a==c&&a>b)
       {
           cout<<(b-1)+1<<" 0 "<<(b-c)+1<<endl;
       }
       else if(b==c&&b>a)
       {
           cout<<"0 "<<(a-b)+1<<" "<<(a-c)+1<<endl;
       }
    }
}
