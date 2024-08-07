#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,one=0,two=0,c=0;
        cin>>n>>a>>b;
        one=n*a;
        if(n%2==1)
        {
            c=n-1;
            two=c/2;
            two=two*b;
            two=two+a;
        }
        else if(n%2==0)
        {
            two=n/2;
            two=two*b;
        }

        if(one>=two)
        {
            cout<<two<<endl;
        }
        else if(two>one)
        {
            cout<<one<<endl;
        }


        }

    }

