#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int count=0;
        // int i=0;
        for(int i=0;i<n;i++){

            if(a[i]==1){
                count++;
                
            }

        }
        count=count/2;
        cout<<n-count<<endl;
    }
    
    return 0;
}