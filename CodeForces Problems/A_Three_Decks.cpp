#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll a,b,c;
        cin>>a>>b>>c;

        ll sum=a+b+c;
        if(sum%3!=0){
            cout<<"NO"<<endl;
            continue;
        }

        ll x=sum/3;
        if(x>=b&&x<=c){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
