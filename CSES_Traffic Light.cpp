#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,n;
    cin>>x>>n;
    vector<int> ps={0,x};
    multiset<int> ln={x};
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        int j=0;
        while(j<ps.size() && ps[j]<p){
            j++;
        }
        int r=ps[j];
        int l=ps[j-1];
        ln.erase(ln.find(r-l));
        ln.insert(p-l);
        ln.insert(r-p);
        ps.insert(ps.begin()+j,p);
        cout<<*ln.rbegin()<<" ";
    }
    return 0;
}
