#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> w(n);
        for (int i = 0; i < n; i++){
            cin>>w[i];
        }
        sort(w.begin(),w.end());
        int sum=0;
        int flg=1;
        for(int i=0;i<n;i++){
            sum+=w[i];
            if(sum==x){
                if(i==n-1){
                    flg =0;
                    break;
                }
                swap(w[i],w[i+1]);
                break;
            }
        }
        if(!flg){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            for(int i=0;i<n;i++){
                cout<<w[i]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
