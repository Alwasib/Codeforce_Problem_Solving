#include<iostream>
using namespace std;
int main()
{
    int t,h,m,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        a=0;
        b=0;
        cin>>h>>m;
        a=24*60;
        b=h*60;
        a=a-b;
        cout<<a-m<<endl;
        if(h=='0'&&m=='0')
        {
            cout<<24*60<<endl;
        }

    }
}
