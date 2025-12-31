#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int t;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        int an =upper_bound(v.begin(),v.end(),m)-v.begin();
        
        cout<<an<<"\n";
    }
    return 0;
}