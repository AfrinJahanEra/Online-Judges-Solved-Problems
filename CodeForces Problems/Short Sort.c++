// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int flag=0;
        if(str.substr(0,3)=="abc"){
            cout<<"YES"<<endl;
            continue;
        }
        
        else if(str.substr(0,3)=="bac"){
            cout<<"YES"<<endl;
            continue;
        }
        else if(str.substr(0,3)=="acb"){
            cout<<"YES"<<endl;
            continue;
        }
        else if(str.substr(0,3)=="cba"){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }

    return 0;
}