#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,c;
        cin>>s;
        cin>>c;
        int d=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==c[0])
                {
                    if(i%2==0)
                    {
                        d++;
                        break;
                    }
                }
            }
            if(d>0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

}
}

