#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int z=0,o=0;
        for(char c:s){
            if(c=='0'){
                z++;
            }
            else o++;
        }
        int m=min(z,o);
        if(m%2==0){
            cout<<"Ramos"<<endl;
        }
        else{
            cout<<"Zlatan"<<endl;
        }
    }
    
    return 0;
}