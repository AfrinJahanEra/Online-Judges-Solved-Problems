#include <iostream>
using namespace std;

int main() {
    int a[3];
    int b[3];
    int sum1 = 0;
    int sum2 = 0;
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < 3; i++) {
        cin >> a[i];
        sum1 = sum1 + a[i];
    }

    for (int i = 0; i < 3; i++) {
        cin >> b[i];
        sum2 = sum2 + b[i];
    }

    int n;
    cin >> n;

    if(sum1%5==0){
        count1=sum1/5;
    }
    else{
        count1=(sum1/5)+1;
    }
    if(sum2%10==0){
        count2=sum2/10;
    }
    else{
        count2=(sum2/10)+1;
    }
    

    if ((count1 + count2) <= n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
