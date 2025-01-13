#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int ch=0,bc=0,bk=0,mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i+=3)
    {
        ch=ch+a[i];
    }
    for(int i=1;i<n;i+=3)
    {
        bc=bc+a[i];
    }
    for(int i=2;i<n;i+=3)
    {
        bk=bk+a[i];
    }
    if(ch>bc&&ch>bk)
    {
        cout<<"chest"<<endl;
    }
    else if(bc>ch&&bc>bk)
    {
        cout<<"biceps"<<endl;
    }
    else
    {
        cout<<"back"<<endl;
    }
}
