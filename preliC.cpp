#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i=0;i<s.size();i++) {

        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            s[i] = (s[i] - 'a' + 1) % 26 + 'a';
        } else {
            s[i] = (s[i] - 'a' + 2) % 26 + 'a';
        }
    }

    cout << s << endl;
    return 0;
}

