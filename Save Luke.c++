#include<iostream>
#define ll long long
using namespace std;

int main(){
        ll int i,j,k;
        double d,l,v1,v2,x;

        cin>>d>>l>>v1>>v2;

        x=(l-d)/(v1+v2);

        printf("%.15lf",x);

        return 0;
}
