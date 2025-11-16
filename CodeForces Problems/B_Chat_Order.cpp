#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    set<string> s;
    vector<string> a;
    for (int i=n-1;i>=0;i--){
        if(s.find(v[i])==s.end()){
            a.push_back(v[i]);
            s.insert(v[i]);
        }
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
    return 0;
}