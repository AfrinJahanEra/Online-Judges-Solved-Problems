#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    set<int> s;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n==1){
            s.insert(x);
        }else if(n==2){
            s.erase(x);
        }else if(n==3){
            if(s.find(x)!=s.end()){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
    }
    return 0;
}
