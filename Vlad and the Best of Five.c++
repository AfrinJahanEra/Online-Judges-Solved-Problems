#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        int A=0,B=0;
        for(int i=0;str[i]!='\0';i++){
            if(str[i]=='A'){
                A++;
            }
            else{
                B++;
            }
        }
        if(A>B){
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
    }

    return 0;
}