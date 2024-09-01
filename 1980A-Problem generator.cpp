#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
     char a[7]={'A','B','C','D','E','F','G'};
    while(t--)
    {
        int n,m,c=0,sum=0,d=0,p=0;
        cin>>n>>m;
        string s;
        cin>>s;

        for(int i=0;i<7;i++)
        {
            c=0;
            p=0;
            d=0;
            for(int j=0;j<n;j++)
            {
                if(a[i]!=s[j])
                {
                    c++;
                }
            }

            if(c==n)
            {
                sum=sum+m;
            }
            else{
                p=n-c;
                if(p>=m)
                {
                    continue;
                }
                else{
                        d=m-p;
                    sum=sum+d;
                }
            }

        }
        cout<<sum<<endl;
    }
}
