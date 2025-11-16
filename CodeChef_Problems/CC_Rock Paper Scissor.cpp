#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string str;
        cin>>str;
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<n;i++){
            if(s[i]=='R'&&str[i]=='S'){
                cnt1++;
            }else if(s[i]=='S'&&str[i]=='P'){
                cnt1++;
            }else if(s[i]=='P'&&str[i]=='R'){
                cnt1++;
            }else if(str[i]=='R'&&s[i]=='S'){
                cnt2++;
            }else if(str[i]=='S'&&s[i]=='P'){
                cnt2++;
            }else if(str[i]=='P'&&s[i]=='R'){
                cnt2++;
            }
        }
        if(cnt1>cnt2){
            cout<<0<<endl;
        }else{
            cout<<((cnt2-cnt1)/2)+1<<endl;
        }
    }
    return 0;
}