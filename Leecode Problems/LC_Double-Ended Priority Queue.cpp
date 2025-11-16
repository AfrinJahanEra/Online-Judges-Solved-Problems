#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin>>n>>q;
    priority_queue<int> mx;
    priority_queue<int,vector<int>,greater<int>> mn;
    unordered_map<int,int> c;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mx.push(x);
        mn.push(x);
        c[x]++;
    }
    while(q--){
        int t;
        cin>>t;
        if(t==0){
            int x;
            cin>>x;
            mx.push(x);
            mn.push(x);
            c[x]++;
        }else if(t==1){
            while (c[mn.top()]==0){
                mn.pop();
            }
            int v=mn.top();
            cout<<v<<"\n";
            c[v]--;
        }else if(t==2){
            while(c[mx.top()]==0){
                mx.pop();
            }
            int v=mx.top();
            cout<<v<<"\n";
            c[v]--;
        }
    }
    return 0;
}
