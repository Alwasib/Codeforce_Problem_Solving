#include<iostream>
using namespace std;
int main()
{
    int n,m,c=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
        for(int j=0;j<m;j++)
        {
            cout<<"#";
            if(j==m-1)
            {
                cout<<endl;
            }

        }
        }
        else{
            for(int p=0;p<m;p++)
            {
                if(c%2==0)
                {
                if(p==m-1)
                {
                    cout<<"#"<<endl;
                    c++;
                }
                else{
                    cout<<".";
                }
                }
                else{
                    if(p==0)
                    {
                        cout<<"#";

                    }

                    if(p==m-1)
                    {
                        cout<<endl;
                        c++;
                    }
                    else
                    {
                        cout<<".";
                    }
                }
            }
        }
    }
}
