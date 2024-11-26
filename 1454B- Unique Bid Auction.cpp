#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Number of participants

        int a[n];
        unordered_map<int, int> freq; // Frequency map
        unordered_map<int, int> firstIndex; // Map to store the first occurrence index of each number

        // Input array and populate frequency and firstIndex maps
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
            if (firstIndex.find(a[i]) == firstIndex.end()) {
                firstIndex[a[i]] = i; // Store the first occurrence index
            }
        }

        int minValue = INT_MAX;
        int winnerIndex = -1;

        // Find the smallest unique number
        for (const auto& [value, count] : freq) {
            if (count == 1 && value < minValue) {
                minValue = value;
                winnerIndex = firstIndex[value]; // Get the 0-based index
            }
        }

        // Output the 1-based index of the winner or -1 if no winner
        if (winnerIndex == -1) {
            cout << -1 << endl;
        } else {
            cout << winnerIndex + 1 << endl; // Convert to 1-based index
        }
    }

    return 0;
}

