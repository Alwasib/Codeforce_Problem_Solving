#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    while (true) {
        n -= gcd(a, n);
        if (n == 0) {
            cout << 0 << endl;
            break;
        }
        n -= gcd(b, n);
        if (n == 0) {
            cout << 1 << endl;
            break;
        }
    }
}
