#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> p;
    for(int i=2;i<=100;i++){
        int flgp=1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){

                flgp=0;
                break;
            }
        }
        if (flgp){
            p.push_back(i);
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int an=1000;
        for(int i=0;i<n;i++){
            long long a;
            cin>>a;
            for(int i:p){
                if(a%i!=0){
                    an=min(an,i);
                    break;
                }
            }
        }
        cout<<an<<endl;
    }
    return 0;
}