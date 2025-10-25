#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main() 
{
    long int a[4];
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }

    string str;
    cin >> str;

    long int sum = 0;
    for (int i = 0; i < str.size(); i++) {
        sum = sum + a[(str[i]-'1')];
    }

    cout << sum << endl;
    return 0;
}
