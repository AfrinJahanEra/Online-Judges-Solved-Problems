#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;++i){
        int a,b;
        cin>>a>>b;
        v[i]={b,a};
    }
    sort(v.begin(),v.end());
    int c=0,l=0;
    for(auto &p:v){
        int s=p.second,e=p.first;
        if(s>=l){
            c++;
            l=e;
        }
    }
    cout<<c<<"\n";
    return 0;
}