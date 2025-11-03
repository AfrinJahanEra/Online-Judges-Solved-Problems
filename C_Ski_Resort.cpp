#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        ll q;
        cin>>n>>k>>q;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll ans=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]<=q){
                count++;
            }else{
                if(count>=k){
                    ll l=count;
                    ll n_val=l-k+1;
                    ans+=n_val*(n_val+1)/2;
                }
                count = 0;
            }
        }
        if(count>=k){
            ll l=count;
            ll n_val=l-k+1;
            ans+=n_val*(n_val+1)/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}