#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin>>n;
        
        string str;
        cin >> str;
        
        for(int i = 0;i < n ;i++){
            if(str[i]=='U'){
                cout<<"D";
            }
            else if(str[i]=='D'){
                cout<<"U";
            }
            else{
                cout<<str[i];
            }
        }
        cout<<endl;
    }

    return 0;
}
