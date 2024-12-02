#include <iostream>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int x = 0, res = 0;

        for (long long int p = 1; p < n; p++)
        {
            cin >> x;
            if (x)
            {
                res += x;
            }
            else if (res > 0)
            {
                res++;
            }
        }

        cin >> x;

        cout << res << endl;
    }
    return 0;
}
