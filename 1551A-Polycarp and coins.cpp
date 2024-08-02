#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,c1=0,c2=0,sum=0,p=0;
        cin>>n;
        p=n/3;
        c1=p;
        c2=p;
        sum=n%3;
        if(sum==1)
        {
            c1++;
        }
        else
            if(sum==2)
        {
            c2++;
        }

        cout<<c1<<" "<<c2<<endl;
    }
}
