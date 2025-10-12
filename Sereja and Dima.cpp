#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,r=n-1,s1=0,s2=0;
    for(int i= 0;i<n;i++){
        if(i%2==0){
            if(a[l]>a[r]){
                s1+=a[l];
                l++;
            }
            else{
                s1+=a[r];
                r--;
            }
        }else{
            if(a[l]>a[r]){
                s2+=a[l];
                l++;
            }
            else{
                s2+=a[r];
                r--;
            }
        }
    }
    cout<<s1<<" "<<s2<<endl;
    return 0;
}
