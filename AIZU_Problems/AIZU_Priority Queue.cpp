#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin>>n>>q;
    vector<priority_queue<int>> pq(n);
    while(q--){
        int m,t;
        cin>>m>>t;
        if(m==0){
            int x;
            cin>>x;
            pq[t].push(x);
        }else if(m==1){
            if(!pq[t].empty()){
                cout <<pq[t].top()<<"\n";
            }
        }else if(m==2){
            if(!pq[t].empty()){
                pq[t].pop();
            }
        }
    }

    return 0;
}
