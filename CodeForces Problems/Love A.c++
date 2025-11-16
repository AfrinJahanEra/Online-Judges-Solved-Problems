#include <iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cin>>str;
    
    int n=str.length();
    int count=0;
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'){
            count++;
        }
    }
    
    if(count>(n/2)){
        cout<<n<<endl;
    }
    else{
       cout<<2*count-1<<endl;
    }
    
    return 0;
}