#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        ll ans=0;
        if(n>0){
            if(a[0]%2==b[0]){
                ans+=a[0];
            }else{
                ans+=a[0]-1;
            }
            for(int i=0;i<n-1;i++){
                int d=a[i+1]-a[i];
                int p=(b[i+1]-b[i])%2;
                if(p<0){
                    p += 2;
                }
                if(d%2==p){
                    ans+=d;
                }else{
                    ans+=d-1;
                }
            }
            ans+=m-a[n-1];
        }else{
            ans+=m;
        }
        cout<<ans<<endl;
    }
    return 0;
}