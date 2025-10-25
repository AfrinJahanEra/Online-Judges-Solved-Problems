#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<1<<endl;
    }
    else{
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<=a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    int sum1=0,sum2=sum;
    int i=0;
    int count=0;
    while(sum1<=sum2){
        sum1=sum1+a[i];
        sum2=sum-sum1;
        i++;
        count++;
    }
    cout<<count<<endl;
    }
    return 0;
}