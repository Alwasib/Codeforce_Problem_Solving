#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c=0;
        if(s.size()==1)
        {
            if(s[0]=='Y'||s[0]=='e'||s[0]=='s')
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='Y'&& s[i+1]=='e')
            {
                c++;
            }
            else if(s[i]=='e'&&s[i+1]=='s')
            {
                c++;
            }
            else if(s[i]=='s'&&s[i+1]=='Y')
            {
                c++;
            }
            else
            {
                cout<<"NO"<<endl;
                c=0;
                break;
            }

        }
        if(c>0)
        {
            cout<<"YES"<<endl;
        }

}
    }
}
