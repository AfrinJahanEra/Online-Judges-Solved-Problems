#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,l;
        cin>>n>>k>>l;
        vector<int> len;
        for(int i=0;i<n;i++){
            int m,lg;
            cin>>m>>lg;
            if(lg==l){
                len.push_back(m);
            }
        }
        if(len.size()<k){
            cout<<-1<<endl;
            continue;
        }
        sort(len.rbegin(),len.rend());
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=len[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
