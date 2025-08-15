#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;  // count frequency of each char

        for (char c : s) {
            freq[c]++;
        }

        // Move to vector for sorting
        vector<pair<char, int>> vec(freq.begin(), freq.end());

        // Sort by frequency in descending order
        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        // Build the result string
        string result;
        for (auto &p : vec) {
            result.append(p.second, p.first); // append char p.second times
        }

        return result;
    }
};

int main() {
    Solution sol;
    cout << sol.frequencySort("tree") << "\n";   // eert or eetr
    cout << sol.frequencySort("cccaaa") << "\n"; // cccaaa or aaaccc
    cout << sol.frequencySort("Aabb") << "\n";   // bbAa or bbaA
}
