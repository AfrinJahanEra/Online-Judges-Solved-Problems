#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        int flgb=0;
        for(char c:s){
            if(c=='B'){
                flgb=1;
                break;
            }
        }
        if(!flgb){
            for(int i=0;i<q;i++){
                ll x;
                cin>>x;
                cout<<x<<"\n";
            }
            continue;
        }
        vector<int> b(n);
        for(int i=0;i<n;i++){
            int j=0;
            while(s[(i+j)%n]!='B'){
                j++;
            }
            b[i]=j;
        }
        for(int i=0;i<q;i++){
            ll x;
            cin>>x;
            ll an=0;
            int j=0;
            while(x>0){
                int k=b[j];
                if(x<=k){
                    an+=x;
                    break;
                }else{
                    an+=k+1;
                    x=(x-k)/2;
                    j=(j+k+1)%n;
                }
            }
            cout<<an<<"\n";
        }
    }
    return 0;
}