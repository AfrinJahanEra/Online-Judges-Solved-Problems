#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; 
    cin>>s;
    vector<long long> f(26, 0);
    for(char ch:s){
        f[ch-'A']++;
    }
    int o=0;
    int id=-1;
    for(int i= 0;i<26;i++){
        if(f[i]%2){
            o++;
            id= i;

        }
    }
    if(o>1){
        cout<<"NO SOLUTION";
        return 0; 
    }
    string a;
    a.reserve(s.size()/2);
    for(int i=0;i<26;i++){
        a.append(f[i]/2,'A'+i);
    }
    string b;
    if(id!=-1){
        b.append(f[id]%2,'A'+id);
    }
    cout<<a;
    if(!b.empty()){
        cout<<b;
    }
    reverse(a.begin(),a.end());
    cout<<a;
    return 0;
}
