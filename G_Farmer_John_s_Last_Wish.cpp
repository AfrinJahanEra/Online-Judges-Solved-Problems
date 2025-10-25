#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int M = 200000;

vector<vector<int>> divisors;
vector<int> count_D, gcd_D;
vector<bool> valid;
vector<int> value;
vector<bool> in_touched_D, in_touched_value;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void precompute_divisors() {
    divisors.resize(M+1);
    for (int i = 1; i <= M; i++) {
        for (int j = i; j <= M; j += i) {
            divisors[j].push_back(i);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    precompute_divisors();
    count_D.resize(M+1, 0);
    gcd_D.resize(M+1, 0);
    valid.resize(M+1, false);
    value.resize(M+1, 0);
    in_touched_D.resize(M+1, false);
    in_touched_value.resize(M+1, false);

    int t;
    cin >> t;
    while (t--) {
        vector<int> touched_D, touched_value;
        int n;
        cin >> n;
        int G = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            G = gcd(G, x);
            for (int D : divisors[x]) {
                if (D > M) continue;
                if (!in_touched_D[D]) {
                    in_touched_D[D] = true;
                    touched_D.push_back(D);
                }
                count_D[D]++;
                if (gcd_D[D] == 0) {
                    gcd_D[D] = x;
                } else {
                    gcd_D[D] = gcd(gcd_D[D], x);
                }
                if (valid[D]) {
                    for (int G_div : divisors[D]) {
                        if (G_div < D) {
                            if (count_D[D] > value[G_div]) {
                                value[G_div] = count_D[D];
                                if (!in_touched_value[G_div]) {
                                    in_touched_value[G_div] = true;
                                    touched_value.push_back(G_div);
                                }
                            }
                        }
                    }
                } else {
                    if (gcd_D[D] == D) {
                        valid[D] = true;
                        for (int G_div : divisors[D]) {
                            if (G_div < D) {
                                if (count_D[D] > value[G_div]) {
                                    value[G_div] = count_D[D];
                                    if (!in_touched_value[G_div]) {
                                        in_touched_value[G_div] = true;
                                        touched_value.push_back(G_div);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            cout << value[G] << " ";
        }
        cout << endl;

        for (int D : touched_D) {
            count_D[D] = 0;
            gcd_D[D] = 0;
            valid[D] = false;
            in_touched_D[D] = false;
        }
        for (int G_val : touched_value) {
            value[G_val] = 0;
            in_touched_value[G_val] = false;
        }
    }
    return 0;
}