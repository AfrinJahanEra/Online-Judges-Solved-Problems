#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    map<int,map<int,string>> m;
    for(int i= 0;i<n;i++){
        int a,b;
        string s;
        cin>>a>>b>>s;
        m[a][b]=s;
    }
    int t;
    cin>>t;
    for(int i= 0;i<t;i++){
        int a,b;
        cin>>a>>b;
        cout<<m[a][b]<<endl;

    }
    return 0;
}