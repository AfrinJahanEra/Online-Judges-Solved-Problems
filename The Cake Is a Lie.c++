#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int m,n,k;
        cin >> m >> n >> k;
        
        int barrel=(n-1)+(m-1)*n;
        if(barrel==k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
