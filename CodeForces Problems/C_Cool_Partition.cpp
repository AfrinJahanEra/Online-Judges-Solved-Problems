#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll c=1,b=0;
        set<ll> s;
        s.insert(a[0]);
        for(ll i=1;i<n;i++){
            if(s.find(a[i])!=s.end()){
                s.erase(a[i]);
                
            }
            if(s.empty()){
                c++;
                for(ll j=b+1;j<=i;j++){
                    s.insert(a[j]);
                }
                b=i;
            }
        }
        cout<<c<<"\n";
    }

    
    return 0;
}