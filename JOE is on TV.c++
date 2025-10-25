#include <iostream>
#define db double
#define ll long long int
#define Era(i,n) for(int i=0;i<n;i++)
#define Print_kor cout<<
using namespace std;

int main() {
    ll n;
    cin >> n;

    db m = n;
    db ans = 0;

    Era(i,n) {
        ans += 1.0 / m; 
        m--;
    }

    cout.precision(12);
    Print_kor(ans); 

    return 0;
}
