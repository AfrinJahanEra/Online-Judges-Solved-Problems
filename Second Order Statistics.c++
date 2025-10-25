#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for (int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    for(int i=1;i<n;i++){
        if(a[i]!=a[0]){
            cout<<a[i]<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
