#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k,p=0,n=0,m=0;
        cin >> k;
        p = k - 2;
        vector<int> a(k);
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }

        set<int>minan;
        for (int i = 0; i < k; i++)
        {
            if (p % a[i] == 0 && minan.count(p / a[i]))
            {
                n = a[i];
                m = p / a[i];
                break;
            }
            minan.insert(a[i]);
        }

        cout << n << " " << m << endl;
    }
    return 0;
}
