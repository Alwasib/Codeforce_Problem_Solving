// My Birthday year
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n==2)
        {
          for(int i=1;i<n;i++)
        {
            if(a[i]-a[i-1]>1)
            {
                continue;
            }
            else
            {
                c++;
                break;
            }
        }
         if(c==0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
            cout<<"No"<<endl;
        }




    }
}
