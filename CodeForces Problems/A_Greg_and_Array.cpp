#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m,k;
    cin>>n>>m>>k;
    
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<ll>l(m),r(m),d(m);
    for(int i=0;i<m;i++){
        cin>>l[i]>>r[i]>>d[i];
        l[i]--;
        r[i]--;
    }
    vector<ll>op(m+1,0);
    for(int i=0;i<k;i++){
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        op[x]++;
        op[y+1]--;
    }
    for(int i=1;i<m;i++){
        op[i]+=op[i-1];
    }
    vector<ll>diff(n+1,0);
    for(int i=0;i<m;i++){
        if(op[i]>0){
            diff[l[i]]+=d[i]*op[i];
            diff[r[i]+1]-=d[i]*op[i];
        }
    }
    for(int i=1;i<n;i++){
        diff[i]+=diff[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]+diff[i]<<" ";
    }
    cout<<endl;
    return 0;
}