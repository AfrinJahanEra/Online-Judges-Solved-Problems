#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    vector<int> c;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int j=0;
    int i=0;
    for(i=0;i<n&&j<m;i++){
        if(a[i]<b[j]){
            c.push_back(a[i]);
        }
        else if(a[i]>b[j]){
            c.push_back(b[j]);
            j++;
            i--;
        }else if(a[i]==b[j]){
            c.push_back(a[i]);
            c.push_back(b[j]);
            j++;
        }
    }

        while(j<m){

            c.push_back(b[j]);
            j++;
        
        }


        while(i<n){

            c.push_back(a[i]);
            i++;
        
        }

    for(int k=0;k<(int)c.size();k++){
        cout<<c[k]<<" ";
    }

    return 0;
}