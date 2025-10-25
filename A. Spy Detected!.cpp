#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        for(int i=1;i<n-1;i++){
            if(v[i]!=v[i-1]&&v[i]!=v[i+1]){
                cout<<i+1<<"\n";
                break;
            }else if(v[i]!=v[i-1]&&v[i]==v[i+1]){
                cout<<i<<"\n";
                break;
            }else if(v[i]==v[i-1]&&v[i]!=v[i+1]){
                cout<<i+2<<"\n";
                break;
            }
        }
    }
    return 0;
}
