#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m,q;
        cin>>n>>m>>q;
        vector<ll>v;
        for(int i=1;i<=m;i++){
            ll x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(int i=1;i<=q;i++){
            ll x;
            cin>>x;
            if(v[0]<x&&v[m-1]<x){
                cout<<abs(v[m-1]-n)<<endl;
            }
            else if(x<v[0]&&x<v[m-1]){
                cout<<abs(v[0]-1)<<endl;
            }
            else{
                ll l=lower_bound(v.begin(),v.end(),x)-v.begin();
                ll f1=abs(x-v[l-1])-1;
                ll f2=abs(x-v[l])-1;
                ll mn=min(f1,f2);
                ll mx=max(f1,f2);
                mx=mn;
                cout<<mn+1+(mx/2)<<endl;
            }
        }
    }
    return 0;
}
