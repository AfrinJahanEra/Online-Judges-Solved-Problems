#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        sort(a,a+n);
        int an=0;
        for(int i=0;i<n;i++){
            int v=a[i];
            if(m[a[i]]!=0){
                an++;
                while(m[v]>0){
                    m[v]--;
                    v++;
                }
            }
        }
        cout<<an<<"\n";
    }
    return 0;
}