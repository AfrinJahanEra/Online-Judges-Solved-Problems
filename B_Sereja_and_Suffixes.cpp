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
    while(m--){
        int x;
        cin>>x;
        set<int> s;
        for(int i=x-1;i<n;i++){
                s.insert(a[i]);
        }
        cout<<s.size()<<"\n";
    }
    return 0;
}