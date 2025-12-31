#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        int flg=1;
        for(int i=1;i<n;++i){
            int d=abs(a[i]-a[i-1]);
            if(d!=5&&d!=7){
                flg=0;
                break;
            }
        }
        if(flg){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}