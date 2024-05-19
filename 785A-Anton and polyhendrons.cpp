#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0;
    cin>>n;
    string s;
    for(i=0;i<n;i++)
    {
        cin>>s;
        if(s=="Tetrahedron")
        {
            c=c+4;
        }
        else if(s=="Cube")
        {
            c=c+6;
        }
        else if(s=="Octahedron")
        {
            c=c+8;
        }
        else if(s=="Dodecahedron")
        {
            c=c+12;
        }
         else if(s=="Icosahedron")
        {
            c=c+20;
        }

    }
    cout<<c;
}
