#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main() {
    
    ll int t;
    cin >> t;
    
    while (t--) {
        
        ll int n;
        cin >> n;
        
        string str;
        cin >> str;
        
        int U = 0, R = 0 , flag =0 ;
        
        for (int i = 0; i < n; i++) {
            if (str[i] == 'U') U++;
            if (str[i] == 'D') U--;
            if (str[i] == 'R') R++;
            if (str[i] == 'L') R--;
            if (U == 1 && R == 1){
                flag=1;
                break;
            }
                
        }
        
        if (flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
