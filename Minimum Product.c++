#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        
        ll d1 = a - x, d2 = b - y;
        
        if (d1 + d2 <= n)
        {
            cout << x * y << endl;
        }
        else
        {
            ll ans1 = (a - min(d1, n)) * (b - min(d2, n - min(d1, n)));
            ll ans2 = (b - min(d2, n)) * (a - min(d1, n - min(d2, n)));
            cout << min(ans1, ans2) << endl;
        }
    }
    
    return 0;
}
