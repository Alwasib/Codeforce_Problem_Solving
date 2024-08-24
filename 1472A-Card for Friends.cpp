#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,h,n;
        long int s=1;
        cin>>w>>h>>n;
        while(w%2==0)
        {
            w=w/2;
            s=s*2;
        }
        while(h%2==0)
        {
            h=h/2;
            s=s*2;
        }
        if(s>=n)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
