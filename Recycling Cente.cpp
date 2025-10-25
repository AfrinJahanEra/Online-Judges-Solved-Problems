#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    ll int t;
    cin>>t;

    while(t--){
        ll int n,c;
        cin>>n>>c;
        int count=0;

        vector<int> a(n);
        vector<int> temp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<=c){
                temp.push_back(a[i]);
            }else{
                count++;
            }
        }
        sort(temp.begin(), temp.end(), greater<int>());

        for(int i=0;i<temp.size();i++){
            if(temp[i]<=c){
                for(int j=i+1;j<temp.size();j++){
                    temp[j]=temp[j]*2;
                }
            }else{
                count++;
            }
        }

        cout<<count<<endl;
    }
    
    return 0;
}