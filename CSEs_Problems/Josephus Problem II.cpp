#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    list<int> l;
    for (int i = 1; i <= n; i++) {
        l.push_back(i);
    }
    auto it = l.begin();
    while (l.size() > 1) {
        it++;
        if (it == l.end()){
            it = l.begin();
        }
        cout << *it << " ";
        it = l.erase(it);
        if (it == l.end()){
            it = l.begin();
        }
    }
    cout << *l.begin() << endl;
    
    return 0;
}