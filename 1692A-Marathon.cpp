#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,d,p=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        p=0;
        cin>>a>>b>>c>>d;
        if(b>a&&c>a&&d>a)
        {
            p=3;
        }
        else if(b>a&&c>a)
        {
            p=2;
        }
        else if(b>a&&d>a)
        {
            p=2;
        }
         else if(c>a&&d>a)
        {
            p=2;
        }
        else if(b>a||c>a||d>a)
        {
            p=1;
        }

        else{
            p=0;
        }
        cout<<p<<endl;
    }

}

