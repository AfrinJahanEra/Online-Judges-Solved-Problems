#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int sum1=0;
        int sum2=0;
        for (int i = 0; i < n; i++) {
            if(a[i]%2==0){
                sum1=sum1+a[i];
            }
            else{
                sum2=sum2+a[i];
            }
        }
        if(sum1>sum2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }

    return 0;
}
