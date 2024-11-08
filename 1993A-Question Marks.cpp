#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p=0;
        cin>>n;
        string s;
        cin>>s;
        int a=0,b=0,c=0,d=0,sum=0;
        p=n*4;
        for(int i=0;i<p;i++)
        {
            if(s[i]=='A')
            {
                a++;
            }
            else if(s[i]=='B')
            {
                b++;
            }
            else if(s[i]=='C')
            {
                c++;
            }
            else if(s[i]=='D')
            {
                d++;
            }
        }
        if(a>p/4)
        {
            sum=sum+n;
        }
        else
        {
            sum=sum+a;
        }
         if(b>p/4)
        {
            sum=sum+n;
        }
        else
        {
            sum=sum+b;
        }
         if(c>p/4)
        {
            sum=sum+n;
        }
        else
        {
            sum=sum+c;
        }
         if(d>p/4)
        {
            sum=sum+n;
        }
        else
        {
            sum=sum+d;
        }
        cout<<sum<<endl;
    }
}
