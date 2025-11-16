#include <iostream>

int main() {
    using namespace std;

    int n;
    cin >> n;
    int a[n];
    int count1=0,count2=0;
    int evenIndex=0,oddIndex=0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            count1++;
            evenIndex=i;
        }
        else if (a[i] % 2 != 0) {
            count2++;
            oddIndex=i;
        }
    }
    if(count1>count2){
        cout << oddIndex+1 <<endl;
    }
    else{
        cout << evenIndex+1<<endl;
    }
    return 0;
}
