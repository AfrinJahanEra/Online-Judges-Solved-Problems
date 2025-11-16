#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll int n;
    cin>>n;
    ll s= 0;
    for(ll int i=0;i<n-1;i++){
        ll int x;
        cin>>x;
        s+=x;
    }
    cout<<n*(n+1)/2-s<<endl;
    return 0;
}
