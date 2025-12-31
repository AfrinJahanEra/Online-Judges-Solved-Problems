#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>pos(n+1);
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        pos[x]=i;
    }
    int an=1;
    for(int i=2;i<=n;++i){
        if(pos[i]<pos[i-1]){
            an++;
        }
    }
    cout<<an<<"\n";
    return 0;
}