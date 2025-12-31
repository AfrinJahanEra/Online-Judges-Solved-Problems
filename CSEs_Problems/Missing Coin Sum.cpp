#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll s=1;
    for(ll x:v){
        if(x<=s){
            s+=x;
        }else{
            break;
        }
    }
    cout<<s<<"\n";
    return 0;
}