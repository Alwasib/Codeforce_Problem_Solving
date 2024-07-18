#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        if(s=="bca"||s=="cab")
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
}
