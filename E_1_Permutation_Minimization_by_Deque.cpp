#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        deque<int> d;
        d.push_back(a[0]);
        for(int i=1;i<n;i++){
            if(a[i]<d.front()){
                d.push_front(a[i]);
            }else{
                d.push_back(a[i]);
            }
        }
        for(int i=0;i<d.size();i++){
            cout<<d[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}