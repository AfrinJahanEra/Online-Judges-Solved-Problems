#include <bits/stdc++.h>
using namespace std;

class TimeMap {
    unordered_map<string, vector<pair<int, string>>> store;
public:
    TimeMap() {}

    void set(string key, string value, int timestamp) {
        store[key].push_back({timestamp, value});
    }

    string get(string key, int timestamp) {
        if (!store.count(key)) return "";

        auto &vec = store[key];
        // Binary search: largest timestamp <= given timestamp
        int l = 0, r = vec.size() - 1, ans = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (vec[mid].first <= timestamp) {
                ans = mid; // candidate found
                l = mid + 1; // try to find later timestamp
            } else {
                r = mid - 1;
            }
        }
        return ans == -1 ? "" : vec[ans].second;
    }
};

int main() {
    TimeMap timeMap;
    timeMap.set("foo", "bar", 1);
    cout << timeMap.get("foo", 1) << "\n"; // bar
    cout << timeMap.get("foo", 3) << "\n"; // bar
    timeMap.set("foo", "bar2", 4);
    cout << timeMap.get("foo", 4) << "\n"; // bar2
    cout << timeMap.get("foo", 5) << "\n"; // bar2
}
