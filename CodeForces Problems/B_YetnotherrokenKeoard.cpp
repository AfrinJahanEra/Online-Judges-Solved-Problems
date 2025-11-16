#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    int t; 
    cin>>t;
    while(t--){
        stack<int> sm,cp;
        string str; 
        cin>>str;
        for(int i=0;i<str.size();i++){
            if(str[i]>= 'A'&&str[i]<='Z'&&str[i]!='B'){ 
                cp.push(i);
            }
            if(str[i]>='a'&&str[i]<='z'&&str[i]!='b'){ 
                sm.push(i);
            }
            if(str[i]=='B'&&!cp.empty()){
                str[cp.top()]='0';
                
                cp.pop();
            }
            if(str[i]=='b'&&!sm.empty()){
                str[sm.top()]='0';
                sm.pop();
            }
        }
        for(int i=0;i<str.size();i++){
            if(str[i]!='B'&&str[i]!='b'&&str[i]!='0'){
                cout<<str[i];
            }
        }
        cout<<endl;

    }
    return 0;
}