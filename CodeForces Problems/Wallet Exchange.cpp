// #include<iostream>
// #include<string>
// #include<cmath>
// #define ll long long 
// using namespace std;

// int main(){
//     ll int t;
//     cin>>t;
//     while(t--){
//         ll int a,b;
//         cin>>a>>b;
//         if(a==b){
//             cout<<"Bob"<<endl;
//         }
//         else if(a>b){
//             if(a%2!=0&&b%2!=0){
//                 cout<<"Bob"<<endl;
//             }
//             else if(a%2==0&&b%2==0){
//                 cout<<"Bob"<<endl;
//             }
//             else if(a%2==0&&b%2!=0){
//                 cout<<"Alice"<<endl;
//             }
//             else{
//                 cout<<"Alice"<<endl;
//             }
//         }
//         else{
//             if(a%2!=0&&b%2!=0){
//                 cout<<"Bob"<<endl;
//             }
//             else if(a%2==0&&b%2==0){
//                 cout<<"Bob"<<endl;
//             }
//             else if(a%2==0&&b%2!=0){
//                 cout<<"Alice"<<endl;
//             }
//             else{
//                 cout<<"Alice"<<endl;
//             }
//         }
//     }
//     return 0;
// }
#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main() {
    ll int t;
    cin >> t;
    while (t--) {
        ll int a,b;
        cin >>a>>b;

        if (a==b || (a%2==0 && b%2==0) || (a%2!=0 && b%2!=0)) {
            cout << "Bob" << endl;
        } 
        else {
            cout << "Alice" << endl;
        }
    }

    return 0;
}
