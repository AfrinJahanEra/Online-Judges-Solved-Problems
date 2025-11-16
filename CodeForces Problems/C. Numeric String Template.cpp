#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            mp[a[i]].push_back(i);
        }
        int m;
        cin>>m;
        while(m--){
            string s;
            cin>>s;
            if(s.length()!=n){
                cout<<"NO\n";
                continue;
            }
            int flg=1;
            for(auto& i:mp){
                char c=s[i.second[0]];
                for(int i:i.second){
                    if(s[i]!=c){
                        flg=0;
                        break;
                    }
                }
                if(flg==0){
                    break;
                }
            }
            if(flg==0){
                cout<<"NO\n";
                continue;
            }
            map<char,int> mp2;
            for(int i=0;i<n;i++){
                if(mp2.find(s[i])==mp2.end()){
                    mp2[s[i]]=a[i];
                }else{
                    if(mp2[s[i]]!=a[i]){
                        flg=0;
                        break;
                    }
                }
            }
            if(flg){
                cout<<"YES"<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }
    }
    return 0;
}