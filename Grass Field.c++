#include <iostream>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b;
        cin>>c>>d;
        int count=0;
        if(a==1)count++;
        if(b==1)count++;
        if(c==1)count++;
        if(d==1)count++;
        if(count==1){
            cout<<1<<endl;
        }
        else{
            cout<<(count/2)<<endl;
        }
    }
    return 0;
}