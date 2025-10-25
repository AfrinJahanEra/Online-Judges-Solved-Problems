#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin>>str;
        int i=0;
        int n1=n;
        while(n1>1 && ((str[i]=='0' && str[n-1]=='1')||(str[i]=='1' && str[n-1]=='0'))){
            n=n-1;
            i++;
            n1=n1-2;
        }
       cout<<n1<<endl;
        
    }
    return 0;
}
