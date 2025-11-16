#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n+4);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        priority_queue<ll> q;
        ll an=0;
        for(int i=0;i<n;i++){
            if(a[i]>0){
                q.push(a[i]);
            }
            else{
                if(!q.empty()){
                    int b=q.top();
                    an+=b;
                    q.pop();
                }
            }
        }
        cout<<an<<endl;
    }
    return 0;
}
