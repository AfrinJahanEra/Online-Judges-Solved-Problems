#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int newArr[101] = {0};
    for(int i=0; i<n; i++){
        newArr[a[i]]++;
    }

    int m = newArr[0];
    for(int i=0; i<100; i++){  
        m = max( m , newArr[i+1]);
    }

    cout <<  m << endl;

    return 0;
}
