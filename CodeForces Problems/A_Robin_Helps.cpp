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
        vector<int>a(n);
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        int g=0,c= 0;
        for(int i=0;i<n;++i){
            if(a[i]>=k){
                g+=a[i];
            }else if(a[i]==0&&g>0){
                g--;
                c++;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}