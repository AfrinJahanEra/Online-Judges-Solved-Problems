#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        string b;
        cin>>n>>b;
        set<char> st;
        for(int i=0;i<n;i++){
            st.insert(b[i]);
        }
        string r;
        for(char ch:st){
            r+=ch;
        }
        int m=r.size();
        map<char,char> mp;
        for(int i= 0;i<m;i++){
            mp[r[i]]= r[(m-1)-i];

        }
        string s=b;
        for(int i=0;i<n;i++){
            s[i]=mp[s[i]];
        }
        cout<<s<<endl;
        
    }
    return 0;
}