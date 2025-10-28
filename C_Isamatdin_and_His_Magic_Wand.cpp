#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        bool e=0,o=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                e=1;
            }
            else{
                o=1;
            }
        }
        if(e&&o){
            sort(a.begin(),a.end());
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}