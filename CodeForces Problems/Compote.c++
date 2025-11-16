#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;

    int m=min(a/1,min(b/2,c/4));
    int sum=(1*m)+(2*m)+(4*m);
    cout<<sum<<endl;

    return 0;
}
