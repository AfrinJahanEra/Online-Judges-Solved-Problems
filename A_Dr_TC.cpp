#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> v(n,0);
        int count=0,cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                count++;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                cnt++;
            }else if(s[i]=='1'){
                cnt--;
            }
            v[i]=count+cnt;
            cnt=0;
        }
        int sum=0;
        for(int i=0l;i<n;i++){
            sum+=v[i];
        }
        cout<<sum<<endl;
    }

    return 0;
}




// optimized version

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;

//         int cnt = 0;
//         for (char c : s){
//             if (c == '1') {
//                 cnt++;
//             }
//         }

//         int total = cnt * (cnt - 1) + (n - cnt) * (cnt + 1);
//         cout << total << "\n";
//     }
//     return 0;
// }
