#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string r;
        for(char c:s){
            if(c=='b'){
                int i=r.size()-1;
                while(i>=0&&!(r[i]>='a'&&r[i]<='z')){
                    i--;
                }
                if(i>=0){
                    r.erase(i,1);
                }
            }
            else if(c=='B'){
                int i=r.size()-1;
                while(i >=0&&!(r[i]>='A'&&r[i]<='Z')){
                    i--;
                }
                if(i>=0){
                    r.erase(i,1);

                }
            }
            else{
                r+=c;
            }
        }
        cout<<r<<"\n";
    }
    return 0;
}