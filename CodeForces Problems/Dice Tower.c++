#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll int t;
    cin>>t;
    while (t--) {
        ll int a;
        cin>>a;
        int rem=a%14;
        int flag=0;
        for (int i=1;(i<=6&&a>14);i++) {
            if (i==rem){
                flag=1;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
