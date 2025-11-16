#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        int al=0,bo=0,c=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            if(b[i]<=2*a[i]){
                al=1;
            }else{
                al=0;
            }
            if(a[i]<=2*b[i]){
                bo=1;
            }else{
                bo=0;
            }
            if(al&&bo){
                c++;
            }
        }
        cout<<c<<endl;

    }
    return 0;
}