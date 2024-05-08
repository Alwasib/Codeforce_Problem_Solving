#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,p=0;
    cin>>t;
    while(t--)
    {
         cin>>a>>b>>c;
        if(((a+b)==c)||((a+c)==b)||((b+c)==a))
        {
            p++;
        }
        if(p>0)
        {
            cout<<"YES"<<endl;
            p=0;
        }
        else{
            cout<<"NO"<<endl;
            p=0;
        }
    }
    return 0;
}

