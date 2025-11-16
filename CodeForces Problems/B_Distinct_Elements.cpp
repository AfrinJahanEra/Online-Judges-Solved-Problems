#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<long long> b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<int> a(n);
        int p=1;
        a[0]=p++;
        for(int i=1;i<n;i++){
            long long d=b[i]-b[i-1];
            int j=(i+1)-d;
            if(j==0){
                a[i]=p++;
            }else{
                a[i]=a[j-1];
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}