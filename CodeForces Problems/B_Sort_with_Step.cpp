#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;++i){
            cin>>v[i];
        }
        int b=0;
        vector<int>ba;
        for(int i=0;i<n;++i){
            int t=i%k;
            int val=(v[i]-1)%k;
            if(t!=val){
                b++;
                ba.push_back(i);
            }
        }
        if(b==0){
            cout<<"0\n";
        }else if(b!=2){
            cout<<"-1\n";
        }else{
            int i=ba[0],j=ba[1];
            if((v[i]-1)%k==j%k&&(v[j]-1)%k==i%k){
                cout<<"1\n";
            }else{
                cout<<"-1\n";
            }
        }
    }
    
    return 0;
}