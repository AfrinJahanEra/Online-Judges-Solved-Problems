#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> f(n+1,0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<=n){
                f[x]++;
            }
        }
        vector<int> p(n+1,0);
        for(int i=1;i<=n;i++){
            p[i]=p[i-1]+f[i];
        }
        int an=1;
        for(int d=1;d<=n;d++){
            int R=min(n,4*d-1);
            int tot=p[R];
            int mul=0;
            for(int j=d;j<=R;j+=d){
                mul+=f[j];
            }
            if(tot-mul<=k){
                an=d;
            }
        }
        cout<<an<<"\n";
    }
    return 0;
}