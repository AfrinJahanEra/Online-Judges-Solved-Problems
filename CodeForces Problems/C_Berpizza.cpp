#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    cin>>t;
    map<ll,ll> mp;
    priority_queue<pair<ll,ll>> pq;
    ll i=1;
    ll j=1;
    while(t--){
        ll x;
        cin>>x;
        if(x==1){
            ll m;
            cin>>m;
            mp[i]=m;
            pq.push({m,-i});
            i++;
        }
        else if(x==2){
            while(mp.find(j)==mp.end()){
                j++;
            }
            cout<<j<<" ";
            mp.erase(j);
            j++;
        }
        else if(x==3){
            while(!pq.empty()){
                ll q=pq.top().first;
                ll p=-pq.top().second;
                if(mp.find(p)==mp.end()){
                    pq.pop();
                }
                else{
                    break;
                }
            }
            ll m=pq.top().first;
            ll idx=-pq.top().second;
            pq.pop();
            cout<<idx<<" ";
            mp.erase(idx);
        }
    }
    
    cout<<"\n";
    return 0;
}