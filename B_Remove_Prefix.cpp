#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        set<int> s;
        int count=0;
        for(int i=n-1;i>=0;i--){
            if(s.find(a[i])!=s.end()){
                count=i+1;
                break;
            }
            s.insert(a[i]);
        }
        cout<<count<<endl;
    }
    return 0;
}