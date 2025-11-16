#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int> f(101,0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            f[x]++;
        }
        int ans=0;
        for(int m =0;m<=101;m++){
            if(f[m]==0){
                bool flg=true;
                for(int i=0;i<m;i++){
                    if(f[i]<1){
                        flg=false;
                        break;
                    }
                }
                if(flg){
                    ans=m;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}