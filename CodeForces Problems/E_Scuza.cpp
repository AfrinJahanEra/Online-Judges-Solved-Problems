#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<ll> v(n);
        for(int i=0;i<n;++i){
            cin>>v[i];
        }
        vector<ll> p(n+1,0);
        vector<int> m(n+1,0);
        for(int i=1;i<=n;++i){
            p[i]=p[i-1]+v[i-1];
            
            m[i]= max(m[i-1],(int)v[i-1]);
            
        }
        while(q--){
            int k;
            cin>>k;
            int idx=upper_bound(m.begin(),m.end(),k)-m.begin()-1;
            cout<<p[idx]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}