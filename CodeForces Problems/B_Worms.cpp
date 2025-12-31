#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> p(n+1);
    for(int i=1;i<=n;i++){
        p[i]=p[i-1]+a[i-1];
    }
    int t;
    cin>>t;
    while(t--){
        int q;
        cin>>q;
        int id=lower_bound(p.begin(),p.end(),q)-p.begin();
        cout<<id<<"\n";
    }
    return 0;
}