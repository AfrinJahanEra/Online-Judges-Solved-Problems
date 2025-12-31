#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<tuple<int,int,int>>v;
    for(int i=0;i<n;++i){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b,i});
    }
    sort(v.begin(),v.end());
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    priority_queue<int,vector<int>,greater<int>>fr;
    vector<int>an(n);
    int r=0;
    for(auto&[x,y,i]:v){

        while(!pq.empty()&&pq.top().first<x){
            fr.push(pq.top().second);
            pq.pop();


        }
        int cr;
        if(!fr.empty()){

            cr=fr.top();
            fr.pop();
        }else{
            cr=++r;
        }
        an[i]=cr;

        
        pq.push({y,cr});
    }
    cout<<r<<"\n";
    for(int i=0;i<n;++i){
        cout<<an[i]<<" \n"[i==n-1];
    }
    return 0;
}