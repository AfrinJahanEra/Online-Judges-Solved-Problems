#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        ll odd=0,even=0,sz=1;
        int an=0;
        for(int n=1;;++n){
            if(n&1)odd+=sz;
            else even+=sz;
            if((odd<=a&&even<=b)||(odd<=b&&even<=a)){
                an=n;
            }else{
                break;
            }
            sz*=2;
        }
        cout<<an<<"\n";
    }
    
    return 0;
}