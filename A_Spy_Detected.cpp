#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

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
            if(v[i]!=v[i-1]&& v[i]!=v[i+1]){
                cout<<i+1<<endl;
                break;
            }else if(v[i]!=v[i-1]&& v[i]==v[i+1]){
                cout<<i<<endl;
                break;
            }else if(v[i]==v[i-1]&& v[i]!=v[i+1]){
                cout<<i+2<<endl;
                break;
            }
        }

    }


    return 0;
}