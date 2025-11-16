#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    cout<<"\n";
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int,int> m;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            if(m.count(a[i])==0){
                m[a[i]]=i;
            }
            mp[a[i]]=i;
        }
        while(q--){
            int a,b;
            cin>>a>>b;
            if(m.count(a)==0||mp.count(b)==0){
                cout<<"NO\n";
                continue;
            }
            if(m[a]<mp[b]){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }


    return 0;
}