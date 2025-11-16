#include <iostream>
#define ll long long
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        ll int a,b,c;
        cin>>a>>b>>c;
        if((b%3)+c<3 && b%3!=0){
            cout<<"-1"<<endl;
        }
        else{
            int total=a+(b/3)+((b%3)+c)/3;
            
            if((((b%3)+c)%3)!=0){
                total=total+1;
            }
    
            cout<<total<<endl;
        }
    }

    return 0;
}