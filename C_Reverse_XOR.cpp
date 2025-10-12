#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int cnt=0;
        while(n>0){
            if(n%2==1){
                cnt++;
            }
            n=n/2;  
        }
        if(cnt%2==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}