#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='.'){
            cout<<0;
            continue;
        }
        else if(str[i]=='-'&&str[i+1]=='.'){
            cout<<1;
            i=i+1;
            continue;
        }
        else if(str[i]='-'&&str[i+1]=='-'){
            cout<<2;
            i=i+1;
            continue;
        }
        else{
        }
    }
    cout<<endl;
    return 0;
}