#include<iostream>
#define ll long long
using namespace std;
 
//    ****************************************************
//    ****************************************************
//    ***                  IUT SWE'22                  ***                      
//    ****************************************************
//    **************************************************** 

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll int n;
        cin >> n;
        ll a[n];
        int sum=0;
        int flag=0;
        for (ll int j = 0; j < n; j++) {
            cin >> a[j];
            sum =sum + a[j];
        }

        if (sum % 3 == 0) {
            cout<<"0"<<endl;
        } 
        else if (sum % 3 == 2) {
            cout<<"1"<<endl;
        } 
        else {
            for (ll int j = 0; j < n; j++) {
                if ((sum - a[j]) % 3 == 0) {
                    flag = 1;
                    break;
                }
            }

            if (flag) {
                 cout<<"1"<<endl;
            } 
            else {
                 cout<<"2"<<endl;
            }
        }
    }

    return 0;
}
