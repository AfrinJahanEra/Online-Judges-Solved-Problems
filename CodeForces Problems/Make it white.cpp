#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int e=0,s=0;
        for(int i=0;i<n;i++){
            if(str[i]=='B'){
                break;
            }
            s++;
        }
        for(int i=n-1;i>=0;i--){
            if(str[i]=='B'){
                break;
            }
            e++;
        }
        cout<<(n-s-e)<<endl;
    }
    return 0;
}