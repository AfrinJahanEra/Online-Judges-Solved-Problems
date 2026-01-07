#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        vector<int>v(k,0);
        for(int i=0;i<n;++i){
            if(a[i]<k){
                v[a[i]]=1;
            }
        }
        int m=0;
        while(m<k&&v[m]){
            m++;
        }
        int an=min(k-1,m);
        cout<<an<<"\n";
    }
    
    return 0;
}