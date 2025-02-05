#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,c=0,d=0;
        cin>>n>>m;
        string s[n],p="vika";
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
         for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(s[j][i] == p[c]) {
                c++;
                if (c == 4) {
                    cout << "YES" << endl;
                      d++;
                }
                break;
            }
        }
    }
    if(d==0)
    {
        cout << "NO" << endl;
    }

    }
}
