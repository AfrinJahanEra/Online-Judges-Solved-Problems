#include <iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    char str[n][5];
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cin>>str[i][j];
        }
    }
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            if(str[i][j]=='O'&&str[i][j+1]=='O'){
                cout<<"YES"<<endl;
                str[i][j]='+';
                str[i][j+1]='+';
                flag=1;
                break;
            }
        }
        if(flag)break;
    }
    if(flag==0){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cout<<str[i][j];
        }
        cout<<endl;
    }
    return 0;
}