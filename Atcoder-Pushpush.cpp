#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    deque<int> d;
    for(int i=0;i<n;i++){
        if(i%2==0){
            d.push_back(a[i]);
        }else{
            d.push_front(a[i]);
        }

    }
    if(n%2==0){
        for(int i=0;i<n;i++){
        cout<<d[i];
            if(i==n-1){
                cout<<endl;
            }else{
                cout<<" ";
            }
        }
        
    }else{
        for(int i=n-1;i>=0;i--){
        cout<<d[i];
            if(i==0){
                cout<<endl;
            }else{
                cout<<" ";
            }
        }
    }
    return 0;
}