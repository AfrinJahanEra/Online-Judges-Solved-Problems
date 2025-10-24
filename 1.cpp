#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int flg=1;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                flg++;
            }
        }
        if(flg>=3&&flg%2==1){
            cout<<"Alice"<<endl;
        }else{
            if(n%2==0){
                if(flg>=3){
                    cout<<"Alice"<<endl;
                }else{
                    cout<<"Bob"<<endl;
                }
            }else{
                if(flg>=4){
                    cout<<"Alice"<<endl;
                }else{
                    cout<<"Bob"<<endl;
                }
            }
        }
    }
    return 0;
}