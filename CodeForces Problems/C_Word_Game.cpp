#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<string>> v(3,vector<string>(n));
        map<string,int> m;
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
                m[v[i][j]]++;
            }
        }
        int s1=0,s2=0,s3=0;
        for(int i=0;i<n;i++){
            int f=m[v[0][i]];
            if(f==1){
                s1+=3;
            }
            else if(f==2){
                s1+=1;
            }
            f=m[v[1][i]];
            if(f==1){
                s2+=3;
            }
            else if(f==2){
                s2+=1;
            }
            f=m[v[2][i]];
            if(f==1){
                s3+=3;
            }
            else if(f==2){
                s3+=1;
            }
        }
        cout<<s1<<" "<<s2<<" "<<s3<<"\n";
    }
    return 0;
}
