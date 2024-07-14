#include<iostream>
using namespace std;
int main()
{
    int Testcase;
    string c;
    cin>>Testcase;

    for(int i=0;i<Testcase;i++)
    {
        cin>>c;
        if(c=="c"||c=="o"||c=="d"||c=="e"||c=="f"||c=="o"||c=="r"||c=="c"||c=="e"||c=="s")
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
