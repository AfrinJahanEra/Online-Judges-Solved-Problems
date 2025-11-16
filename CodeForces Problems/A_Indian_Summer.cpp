#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<pair<string,string>,int> mp;
    int cnt=n; 
    for(int i=0;i<n;i++){
        string s,c;
        cin>>s>>c;
        if(mp[{s,c}]==0){
            mp[{s,c}]=1; 
        }else{
            cnt--; 
        }
    }
    cout<<cnt;
    return 0;
}
