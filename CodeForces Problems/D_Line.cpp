// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         string s;
//         cin>>n>>s;
//         ll sum=0;
//         vector<ll> a;
//         for(int i=0;i<n;i++){
//             if(s[i]=='L'){
//                 sum+=i;
//             }else{
//                 sum+=(n-(i+1));
//             }
//             ll b;
//             if(s[i]=='L'){
//                 b=((n-1)-i)-i;
//             } else {
//                 b=i-(n-(i+1));
//             }
//             if(b>0){
//                 a.push_back(b);
//             }
//         }
//         sort(a.rbegin(), a.rend());
//         vector<ll> r(n);
//         ll c=sum;
//         for(int k=0;k<n;k++){
//             if(k<a.size()){
//                 c+=a[k];
//             }
//             r[k]=c;  
//         }
//         for(int i=0;i<n;i++){
//             cout<<r[i]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }






#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        ll sum=0;
        priority_queue<ll> q;
        int l=0,r=n-1;
        while(l<=r){
            if(s[l]=='L'){

                ll a=((n-1)-l)-l;
                if(a>0){
                    q.push(a);
                }
            }
            if(r!=l&&s[r]=='R'){
                ll a=r-(n-(r+1));
                if(a>0){
                    q.push(a);
                }
            }
            l++;
            r--;
            
        }
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                sum+=i;
            }
            else{
                sum+=(n-(i+1));

            }
        }
        vector<ll> v(n);
        ll c= sum;
        for(int k=0;k<n;k++){
            if(!q.empty()){
                c+=q.top();
                q.pop();
            }


                v[k]=c;
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}