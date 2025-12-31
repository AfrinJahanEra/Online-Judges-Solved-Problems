#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int z=count(s.begin(),s.end(),'0');
        vector<int>v;
        for(int i=0;i<z;i++){
            if(s[i]=='1'){
                v.push_back(i+1);
            }
        }
        for(int i=z;i<n;i++){
            if(s[i]=='0'){
                v.push_back(i+1);
            }
        }
        if(v.empty()){
            cout<<"0\n";
        }else{
            cout<<"1\n";
            cout<<v.size()<<" ";
            for(int x:v){
                cout<<x<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}