#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >>n>>k;
        map<int, long long> bv;
        for (int i = 0; i < k; i++) {
            int b, c;
            cin >> b >> c;
            bv[b] += c;
        }


        vector<long long> earn;
        for (const auto& entry : bv) {
            earn.push_back(entry.second);
        }


        sort(earn.rbegin(), earn.rend());


        long long sum = 0;
        for (int i = 0; i < min(n, (int)earn.size()); i++) {
            sum=sum+ earn[i];
        }
        cout <<sum<< '\n';
    }
}
