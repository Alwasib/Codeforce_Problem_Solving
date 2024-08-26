#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string n1,n2;
    int c=0;
    cin>>n1>>n2;
    for(int i=0;i<n;i++)
    {
        int a=n1[i]-'0';
        int b=n2[i]-'0';
        int x= abs(a-b);
        int y=0;

       if(a<b)
    {
        y=a;
        y=y+(9-b);
        y++;
    }
    else
    {
        y=9-a;
        y=y+b;
        y++;
    }
    if(x>y)
    {
      c=c+y;
    }
    else
    {
        c=c+x;
    }
    }
    cout<<c;
}
