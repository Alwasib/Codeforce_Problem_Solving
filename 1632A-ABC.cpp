#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,in=0,en=0;
        cin>>n;
        string s,p;
        cin>>s;
        if(n==1)
            {
                    cout<<"YES"<<endl;
            }
            else if(n== 2 && s=="00" || s=="11")
            {
                    cout<<"NO"<<endl;
            }
            else if (n== 2 && s=="10" || s=="01")
            {
                    cout<<"YES"<<endl;
            }
            else if(n>2)
            {
                    cout<<"NO"<<endl;
            }
    }
}
