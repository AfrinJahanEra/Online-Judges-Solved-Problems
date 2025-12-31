#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll INF=1e18;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            
        }
        ll mx=0,mn=0,mx2=-INF,mn2=INF;
        for(int i=0;i<n;i++){
            ll nmx=max(mx-a[i],b[i]-mn2);
            ll nmn =min(mn-a[i],b[i]-mx2);
            ll nmx2=max(mx2-a[i],b[i]-mn);
            ll nmn2=min(mn2-a[i],b[i]-mx);
            mx=nmx;
            mn=nmn; 
            mx2=nmx2; 
            mn2= nmn2;
            
        }
        cout<<max(mx,mx2)<<"\n";
    }
    return 0;
}