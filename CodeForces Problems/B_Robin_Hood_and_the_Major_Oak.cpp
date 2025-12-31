#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll l=n-k+1;
        ll co=k/2+(k%2)*(l%2);
        if(co%2== 0){
            cout<<"YES\n";
            
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}