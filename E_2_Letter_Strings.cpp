#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        map<string,ll> f;
        map<char,ll> f1;
        map<char,ll> f2;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            f[s]++;
            f1[s[0]]++;
            f2[s[1]]++;
        }
        ll a=0;
        for(auto it:f){
            string s=it.first;
            ll c=it.second;
            a+=c*(f1[s[0]]-c);
            a+=c*(f2[s[1]]-c);
        }
        cout<<a/2<<"\n";
    }
    return 0;
}