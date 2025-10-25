#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll unsigned long long int

int main()
{
    ll n, m, k, first_max, second_max, ans;
    cin >> n >> m >> k;
    vector<ll> v(n, 0);

    for (size_t i = 0; i < n; i++) {
        cin >> v.at(i);
    }

    sort(v.begin(), v.end());

    first_max = v.at(n - 1);
    second_max = v.at(n - 2);

    ans = (k * first_max + second_max) * (m / (k + 1)) + (first_max * (m % (k + 1)));

    cout << ans << '\n';

    return 0;
}
