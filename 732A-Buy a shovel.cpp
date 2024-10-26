#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,c=0,p=2,d=0;
    cin>>k>>r;
    d=k;
    for(int i=0;i<1000;i++)
    {

         if(k%10==r)
        {
            c++;
            break;
        }
        else if(k%10==0)
        {
            c++;
            break;
        }
        else
        {
            k=d*p;
            p++;
            c++;
        }
    }
    cout<<c<<endl;
}
