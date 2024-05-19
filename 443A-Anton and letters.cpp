#include<bits//stdc++.h>
using namespace std;
int main()
{
    int c=0,l;
    string s;
    getline(cin, s);
    sort(s.begin(),s.end());
    l=s.size();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='{'||s[i]==','||s[i]=='}'||s[i]==' ')
            continue;
        if(s[i]!=s[i+1])
        {
            c++;
        }

    }
 cout<<c;
}
