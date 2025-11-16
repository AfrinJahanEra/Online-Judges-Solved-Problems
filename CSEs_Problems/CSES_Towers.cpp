#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int l=0;
        int r=v.size()-1;
        int pos=-1;
        while(l<=r){
            int m=(l+r)/2;
            if(v[m]>x){
                pos=m;
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        if(pos==-1){
            v.push_back(x);
        }
        else{
            v[pos]=x;
        }
    }
    cout<<v.size();
    return 0;
}
