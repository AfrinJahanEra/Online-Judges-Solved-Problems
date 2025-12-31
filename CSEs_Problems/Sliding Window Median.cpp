#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    multiset<int> lo,hi;
    vector<int> r;
    for(int i=0;i<n;i++){
        if(i>=k){
            if(a[i-k]<=*lo.rbegin()){
                lo.erase(lo.find(a[i-k]));
            }else{
                hi.erase(hi.find(a[i-k]));
            }
        }
        if(lo.empty()||a[i]<=*lo.rbegin()){
            lo.insert(a[i]);
        }else{
            hi.insert(a[i]);
        }
        while((int)lo.size()<(k+1)/2){
            lo.insert(*hi.begin());
            hi.erase(hi.begin());
        }
        while((int)lo.size()>(k+1)/2){
            hi.insert(*lo.rbegin());
            lo.erase(prev(lo.end()));
        }
        if(!lo.empty()&&!hi.empty()&&*lo.rbegin()>*hi.begin()){
            int lomax=*lo.rbegin();
            int himin=*hi.begin();
            lo.erase(prev(lo.end()));
            hi.erase(hi.begin());
            lo.insert(himin);
            hi.insert(lomax);
        }
        if(i>=k-1){
            r.push_back(*lo.rbegin());
        }
    }
    for(int i=0;i<(int)r.size();i++){
        if(i>0)cout<<" ";
        cout<<r[i];
    }
    cout<<endl;
    
    return 0;
}