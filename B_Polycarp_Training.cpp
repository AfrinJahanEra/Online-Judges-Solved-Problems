#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int d=1;
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]>=d){
            c++;
            d++;
        }
    }
    cout<<c<<"\n";
    return 0;
}