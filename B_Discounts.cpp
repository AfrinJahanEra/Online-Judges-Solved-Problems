#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<ll> a(n);
        vector<int> b(k);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<k;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll tot=accumulate(a.begin(),a.end(),0LL);
        ll sav= 0;
        int u=0;
        for(int i=0;i<k;i++){
            if(u+b[i]>n){
                continue;
            }
            int idx=n-u-b[i];
            sav+= a[idx];
            u+=b[i];
        }
        cout<<tot-sav<<endl;
    }
    return 0;
}
