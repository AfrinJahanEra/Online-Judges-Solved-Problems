#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t;
    cin>>t;
    
    int sum[200005];
    sum[1]=1;
    
    for(int i=2; i<=200000; i++){
        int s=0;
        int p=i;
        while(p>0){
            s+=(p%10);
            p/=10;
        }
        sum[i]=sum[i-1]+s;

    }
    while(t--){
        int n;
        cin>>n;
        cout<<sum[n]<<endl;
    }
}
