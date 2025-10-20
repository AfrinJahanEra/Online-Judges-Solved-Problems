#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,n;
    cin>>x>>n;
    set<int> ps={0,x};
    multiset<int> ln={x};
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        auto it=ps.lower_bound(p);
        int r=*it;
        int l=*prev(it);
        ln.erase(ln.find(r-l));
        ln.insert(p-l);
        ln.insert(r-p);
        ps.insert(p);
        cout<<*ln.rbegin()<<" ";
    }
}
