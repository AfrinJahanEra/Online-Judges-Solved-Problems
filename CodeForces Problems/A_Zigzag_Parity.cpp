#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<"1"<<endl;
            continue;
        }
        int l=1,r= n;
        vector<int> v;
        while(l<=r){
            v.push_back(l++);
            if(l<=r){

                v.push_back(r--);
            }

        }
        for(int i=0;i<n;i++){
            if(i){

                cout<<" ";
            }
            cout<<v[i];
        }
        cout<<endl;
    }
    return 0;
}