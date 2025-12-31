#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;++i){
        int a,b;
        cin>>a>>b;
        v.push_back({a,1});
        v.push_back({b,-1});
    }
    sort(v.begin(),v.end());
    int c=0,mx=0;
    for(auto &e:v){
        c+=e.second;
        if(c>mx){
            mx=c;
        }
    }
    cout<<mx<<"\n";
    return 0;
}