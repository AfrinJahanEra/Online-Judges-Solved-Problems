#include <iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string str;
    cin>>str;
    
    char max=str[0];
    for(int i=0;i<n;i++){
        if(max<str[i]){
            max=str[i];
        }
    }
    cout<<max-'a'+1<<endl;
    }
    return 0;
}