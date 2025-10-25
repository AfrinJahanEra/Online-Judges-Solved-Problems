#include <iostream>
using namespace std;

int main() {
   long long int n;
   cin >> n;
   long long int a[n];
   
   for(int i = 0; i < n; i++) {
       cin >> a[i];
   }
   
   long long int count = 1;
   long long int maxCount = 1; 
   
   for(long long int i = 0; i < n-1; i++) {
       if(a[i] < a[i+1]) {
           count++;
       } else {
           count = 1;
       }
       
       if(count > maxCount) {
           maxCount = count;
       }
   }
   
   cout << maxCount;

   return 0;
}
