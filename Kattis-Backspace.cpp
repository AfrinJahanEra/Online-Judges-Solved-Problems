#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    string r;
    for(char c:s){
        if(c== '<'){
            if(!r.empty()){
                r.pop_back();
            }

        }else{
            r.push_back(c);
        }
    }
    cout<<r;
    return 0;
}