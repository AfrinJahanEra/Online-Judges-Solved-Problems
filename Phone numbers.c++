#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    string str;
    cin>>str;
    if(n%2==0){
        for(int i=0;i<n;i+=2){
            cout<<str[i]<<str[i+1];
            if((i+1)!=(n-1)){
                cout<<"-";
            }
        }
    }
    else if(n%3==0){
        for(int i=0;i<n;i+=3){
            cout<<str[i]<<str[i+1]<<str[i+2];
            if((i+2)!=(n-1)){
                cout<<"-";
            }
        }
    }
    else{
        int three=0,i;
        int m=n;
        while( m%2!=0){
            m=m-3;
            three++;
        }
        for(i=0;i<three;i+=3){
            cout<<str[i]<<str[i+1]<<str[i+2]<<"-";
        }
        for(int j=0;j<m;j+=2){
            cout<<str[i]<<str[i+1];
            i=i+2;
            if((j+1)!=m-1){
                cout<<"-";
            }
        }
    }

    return 0;
}