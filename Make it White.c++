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
        int end=0,start=0;
        for(int i=0;i<n;i++){
            if(str[i]=='B'){
                break;
            }
            start++;
        }
        for(int i=n-1;i>=0;i--){
            if(str[i]=='B'){
                break;
            }
            end++;
        }
        cout<<(n-start-end)<<endl;
    }
    return 0;
}