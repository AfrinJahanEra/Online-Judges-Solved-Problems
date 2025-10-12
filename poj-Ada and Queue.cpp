#include <iostream>
#include <deque>
using namespace std;

int main() {
    int q;
    cin >> q;
    
    deque<int> d;
    bool r = false;
    
    while (q--) {
        string s;
        cin >> s;
        
        if (s == "reverse") {
            r = !r;
        }
        else if (s == "push_back") {
            int n;
            cin >> n;
            if (r) d.push_front(n);
            else d.push_back(n);
        }
        else if (s == "toFront") {
            int n;
            cin >> n;
            if (r) d.push_back(n);
            else d.push_front(n);
        }
        else if (s == "front") {
            if (d.empty()) {
                cout << "No job for Ada?" << endl;
            }
            else {
                if (r) {
                    cout << d.back() << endl;
                    d.pop_back();
                }
                else {
                    cout << d.front() << endl;
                    d.pop_front();
                }
            }
        }
        else if (s == "back") {
            if (d.empty()) {
                cout << "No job for Ada?" << endl;
            }
            else {
                if (r) {
                    cout << d.front() << endl;
                    d.pop_front();
                }
                else {
                    cout << d.back() << endl;
                    d.pop_back();
                }
            }
        }
    }
    
    return 0;
}