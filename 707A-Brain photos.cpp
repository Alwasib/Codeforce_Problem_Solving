#include<iostream>
using namespace std;
int main()
{
    int n,m;
    string a,b;
    cin>>n>>m;
    int p,c=0;
    p=n*m;
    if(p==1)
    {
         for(int i=0;i<1;i++)
    {
        cin>>a;
        if(a=="C"||a=="M"||a=="Y")
        {
            c++;
        }
    }
    }
    else{

    for(int i=0;i<p;i++)
    {
        cin>>a;
        if(a=="C"||a=="M"||a=="Y")
        {
            c++;
        }
    }
    }
    if(c==0)
    {
        cout<<"#Black&White"<<endl;
    }
    else if(c>=1){
        cout<<"#Color"<<endl;
    }
}
