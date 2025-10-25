#include<iostream>
#include<string>
#include<cmath>
#define ll long long 
using namespace std;

int main(){
    ll int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int sumPlus=0;
        int sumMinus=0;
        for(int i=0;i<n;i++){
            if(str[i]=='-'){
                sumMinus++;
            }
            else{
                sumPlus++;
            }
        }
        int sum=0;
        if(sumMinus==sumPlus){
            cout<<"0"<<endl;
        }
        else if(sumMinus>sumPlus){
            cout<<abs(n-(sumPlus*2))<<endl;
        }
        else{
            cout<<abs(n-(sumMinus*2))<<endl;
        }
    }
    return 0;
}