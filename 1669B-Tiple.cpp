#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];


        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

            sort(a,a+n);
            int c=0;
        for(int i=0;i<n;i++)
        {
            if((a[i]==a[i+1])&&(a[i]==a[i+2]))
            {
                 c=1;
                 cout<<a[i]<<endl;
                 break;
            }
        }
          if(c==0)
         {
                    cout<<"-1"<<endl;
         }

        }
        }



