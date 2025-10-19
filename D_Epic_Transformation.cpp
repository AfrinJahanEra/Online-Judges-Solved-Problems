#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        priority_queue<int> pq;
        for(auto &p:m){
            pq.push(p.second);
        }
        while(pq.size()>=2){
            int f=pq.top(); 
            pq.pop();
            int s=pq.top(); 
            pq.pop();
            f--;
            s--;
            if(f>0){
                pq.push(f);
            }
            if(s>0){
                pq.push(s);
            }
        }
        int c=0;
        while(!pq.empty()){
            c+=pq.top();
            pq.pop();
        }
        cout<<c<<"\n";
    }
    return 0;
}