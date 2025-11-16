#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set<int> s;
    vector<int> d(n);
    for(int i=n-1;i>=0;i--){
        s.insert(a[i]);
        d[i]=s.size();
    }
    while(m--){
        int x;
        cin>>x;
        cout<<d[x-1]<<"\n";
    }
    return 0;
}