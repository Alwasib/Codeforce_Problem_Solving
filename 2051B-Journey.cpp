#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;

        long long abc = a + b + c;

        long long ABC1 = n / abc;
        long long dist = ABC1 * abc;

        long long ans = ABC1 * 3;

        if (dist >= n)
        {
            cout << ans << endl;
        }
        else
        {

            if (dist + a >= n)
            {
                cout << ans + 1 << endl;
            }
            else if (dist + a + b >= n)
            {
                cout << ans + 2 << endl;
            }
            else
            {
                cout << ans + 3 << endl;
            }
        }
    }

    return 0;
}
