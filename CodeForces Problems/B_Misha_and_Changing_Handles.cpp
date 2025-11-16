#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    vector<pair<string,string>> v;
    while(t--){
        string a,b;
        cin>>a>>b;
        int f=0;
        for(int j=0;j<v.size();j++){
            if(v[j].second==a){
                v[j].second=b;
                f=1;
                break;
            }
        }
        if(!f){
            v.push_back({a,b});
        }
    }
    cout<<v.size()<<"\n";
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
}
