#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int ts=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            ts+=a[i];
        }
        int rs=n*(n+1)/2;
        if(ts!=rs){
            cout<<"NO"<<endl;
            continue;
        }
        vector<int> b=a;
        bool ok=true;
        for(int k=n;k>=1;k--){
            bool f=false;
            for(int s=0;s<=n-k;s++){
                int e=s+k-1;
                bool v=true;
                for(int i=s;i<=e;i++){
                    if(b[i]<1){
                        v=false;
                        break;
                    }
                }
                if(v){
                    f=true;
                    for(int i=s;i<=e;i++){
                        b[i]--;
                    }
                    break;
                }
            }
            if(!f){
                ok=false;
                break;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}
