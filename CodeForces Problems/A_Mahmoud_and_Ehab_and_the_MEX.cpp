#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count =0;
    if(find(a.begin(),a.end(),x)!=a.end()){
        count++;
        
    }
    for(int i=0;i<x;i++){
        if(find(a.begin(),a.end(),i)==a.end()){
            
            count++;
        }
        
    }
    cout<<count<<endl;
    return 0;
}
