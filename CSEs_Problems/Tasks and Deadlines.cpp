#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    ll t=0,an=0;
    for(auto &p:v){
        t+=p.first;
        an+=p.second-t;
    }
    cout<<an<<"\n";
    return 0;
}