#include<iostream>
using namespace std;
int main()
{
    int t,i;
    int n;
    int element=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];


        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
           if(a[0]!=a[1]&&a[1]==a[2])
           {
              cout<<"1"<<endl;
           }
           else
           {
             for(i=0;i<n;i++)
           {
            if(a[i]==a[i+1])
            {

                continue;

            }
            else
            {
               element=i+2;
               cout<<element<<endl;
                break;
            }
           }
           }

    }
}
