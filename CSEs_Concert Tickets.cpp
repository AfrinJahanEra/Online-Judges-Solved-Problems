#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        int idx=-1;
        int l=0;
        int r=v.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(v[mid]<=x){
                idx=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        if(idx==-1){
            cout<<-1<<"\n";
        }else{
            cout<<v[idx]<<"\n";
            v.erase(v.begin()+idx);
        }
    }
    return 0;
}
