#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_map<int,vector<pair<int,int>>> mp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            mp[a[i]+a[j]].push_back({i,j});
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            int d=x-a[i]-a[j];

            if(mp.count(d)){
                for(auto p:mp[d]){
                    int k=p.first,l=p.second;

                    if(i!=k&&i!=l&&j!=k&&j!=l){



                        cout<<i+1<<" "<<j+1<<" "<<k+1<<" "<<l+1;
                        return 0;
                    }
                }
            }
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}