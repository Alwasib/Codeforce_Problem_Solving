#include<iostream>
using namespace std;
int main()
{
    int y,w,a;
    cin>>y>>w;
    if(y>w)
    {
        a=(6-y)+1;
         if(a==0)
        cout<<"0/1";
    else if(a==1)
        cout<<"1/6";
    else if(a==2)
        cout<<"1/3";
    else if(a==3)

        cout<<"1/2";
    else if(a==4)
            cout<<"2/3";
    else if(a==5)
        cout<<"5/6";
    else if(a==6)
        cout<<"1/1";

    }
    else if(y==w)
    {
       a=(6-y)+1;
         if(a==0)
        cout<<"0/1";
    else if(a==1)
        cout<<"1/6";
    else if(a==2)
        cout<<"1/3";
    else if(a==3)

        cout<<"1/2";
    else if(a==4)
            cout<<"2/3";
    else if(a==5)
        cout<<"5/6";
    else if(a==6)
        cout<<"1/1";

    }
    else
    {
         a=(6-w)+1;
         if(a==0)
        cout<<"0/1";
    else if(a==1)
        cout<<"1/6";
    else if(a==2)
        cout<<"1/3";
    else if(a==3)

        cout<<"1/2";
    else if(a==4)
            cout<<"2/3";
    else if(a==5)
        cout<<"5/6";
    else if(a==6)
        cout<<"1/1";

    }
}
