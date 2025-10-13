#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int c1=0,c2=0;
        int n1=0,n2=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                n1++;
                if(a[i]=='0'){
                    c1++;
                }
                if(b[i]=='0'){
                    c2++;
                }
            }else{
                n2++;
                if(a[i]=='0'){
                    c2++;
                }
                if(b[i]=='0'){
                    
                    c1++;
                }
            }
        }
        if(c1>=n1&&c2>=n2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}