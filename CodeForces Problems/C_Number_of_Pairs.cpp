#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll c(vector<int>& a,int lim){
    int n =a.size();
    ll cnt=0;
    int j=n-1;
    for(int i=0;i<n;++i){
        while(j>i&&(ll)a[i]+a[j]>lim){
            j--;
        }
        if(j>i){
            
            cnt+=(j-i);
        }
    }
    return cnt;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        vector<int> a(n);
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        
        
        ll an= c(a,r)-c(a,l-1);
        cout<<an<<"\n";
        
        
    }
    
    return 0;
}