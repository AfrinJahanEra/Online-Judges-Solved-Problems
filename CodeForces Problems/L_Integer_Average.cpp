#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int e=0,o=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                e++;
            }else{
                o++;
            }
        }
        if(n<2){
            cout<<"NO"<<endl;
            continue;
        }
        if(e>=2||o>=2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}