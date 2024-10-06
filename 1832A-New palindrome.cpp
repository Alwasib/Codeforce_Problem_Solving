#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll num = 0;
        ll n = s.length();


        if (n % 2 == 0 and n > 2)
        {
            ll i = 1;
            while (i < n / 2)
            {
                if (s[i] != s[i - 1])
                {
                    num++;
                    break;
                }
                i++;
            }
        }
        else if (n % 2 == 1 and n > 3)
        {
            ll j = 1;
            while (j < n / 2)
            {
                if (s[j] != s[j - 1])
                {
                    num++;
                    break;
                }
                j++;
            }
        }
        if (num==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}

