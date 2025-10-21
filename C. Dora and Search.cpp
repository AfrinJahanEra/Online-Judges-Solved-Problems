#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int l=0,r=n-1;
        multiset<int> s;
        for(int i=0;i<n;i++){
            s.insert(a[i]);
        }
        int flg=0;
        while(l<r){
            int mn=*s.begin();
            int mx=*s.rbegin();
            if(a[l]==mn||a[l]==mx){
                s.erase(s.find(a[l]));
                l++;
            }
            else if(a[r]==mn||a[r]==mx){
                s.erase(s.find(a[r]));
                r--;
            }
            else{
                cout<<l+1<<" "<<r+1<<"\n";
                flg=1;
                break;
            }
        }
        if(flg==0){
            cout<<"-1\n";
        }
    }
    return 0;
}
