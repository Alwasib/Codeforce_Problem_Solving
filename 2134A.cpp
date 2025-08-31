#include <bits/stdc++.h>
using namespace std;

int main() {


    int t;
    cin>>t;
    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;


        if ( ((n - b) & 1LL) ) {
            cout << "NO\n";
            continue;
        }

        if (a <= b) {

            cout << "YES\n";
        } else {

            cout << ( ((n - a) & 1LL) ? "NO\n" : "YES\n" );
        }
    }
    return 0;
}
