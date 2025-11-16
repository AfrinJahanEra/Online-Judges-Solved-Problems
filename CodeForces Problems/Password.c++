#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int x=0;
        x=9-n;
        int sum=0;
        for(int i=1;i<=x;i++){
            sum=sum+(6*i);
        }
        cout<<sum<<endl;
    }
}