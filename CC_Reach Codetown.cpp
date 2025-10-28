#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    string s="CODETOWN";
    while(t--){
        string str;
        cin>>str;
        int flg=1;
        for(int i=0;i<8;i++){
            int v1=(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i] =='U');
            int v2=(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U');
            if((v1&&v2)||(!v1&&!v2)){
                continue;
            }
            flg=0;
            break;
        }
        if(flg){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
