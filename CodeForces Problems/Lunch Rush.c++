#include <iostream>
using namespace std;

int main()
{
    int n, k, f, t, m, h;
    cin >> n >> k >> f >> t;
    if (t > k)
    {
        m = f - (t - k);
    }
    else
    {
        m = f;
    }
    while (--n)
    {
        cin >> f >> t;
        if (t > k)
        {
            h = f - (t - k);
        }
        else
        {
            h = f;
        }
        if (h > m)
        {
            m = h;
        }
    }
    cout << m << endl;
    return 0;
}
