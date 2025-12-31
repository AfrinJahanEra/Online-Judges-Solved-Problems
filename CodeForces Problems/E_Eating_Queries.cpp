#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,t;
        cin>>n>>t;
        vector<int> a(n);
        for(int i=0;i<n;i++) 
            cin>>a[i];
        sort(a.rbegin(),a.rend());
        vector<ll> p(n);
        p[0]=a[0];
        for(int i=1;i<n;i++){
            p[i] =p[i-1]+a[i];
        }
        while(t--){
            ll x;
            cin>>x;
            if(x>p.back()){ 
                    cout<<"-1\n";
            }
            else{
                

                int po=lower_bound(p.begin(),p.end(),x)-p.begin();
                cout<<po+1<<"\n";
                
            }
        }
    }
    
    return 0;
}