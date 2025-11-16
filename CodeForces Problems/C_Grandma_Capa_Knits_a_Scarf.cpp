#include <bits/stdc++.h>
using namespace std;

bool pal(string &s){
    int n=s.size();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-1-i]){
            return false;
        }
    }
    return true;
}
int solve(string &s,char c){
    int n=s.size();
    int l=0,r=n-1;
    int cnt=0;
    while(l<r){
        if(s[l]==s[r]){
            l++;
            r--;
        }else{
            if(s[l]==c){
                l++;
                cnt++;
            }else if(s[r]==c){
                r--;
                cnt++;
            }else{
                return -1;
            }
        }
    }
    return cnt;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        if(pal(s)){
            cout<<0<<endl;
            continue;
        }
        int l=0,r=n-1;
        while(l<r&&s[l]==s[r]){
            l++;
            r--;
        }
        char c1=s[l];
        char c2=s[r];
        int a1=solve(s,c1);
        int a2=solve(s,c2);
        if(a1==-1&&a2==-1){
            cout<<-1<<endl;
        }else if(a1==-1){
            cout<<a2<<endl;
        }else if(a2==-1){
            cout<<a1<<endl;
        }else{
            cout<<min(a1,a2)<<endl;
        }
    }
    return 0;
}