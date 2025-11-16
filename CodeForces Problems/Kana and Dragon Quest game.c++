#include<iostream>
#define ll long long
using namespace std;

int main(){
    ll int t;
    cin>>t;
    while(t--){
        ll int x,m,n,a;
        cin>>x>>m>>n;
        a=x-(n*10);
        if(a<=0){
            cout<<"YES"<<endl;
            continue;
        }
        else{
        while(m--){
            x=(x/2)+10;
            if(x<=0){
                cout<<"YES"<<endl;
                continue;
            }
        }
        x=x-(n*10);
        if(x<=0){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
        }
    }
    return 0;
}