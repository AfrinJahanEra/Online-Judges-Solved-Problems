#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    
    while(t--){
        
        ll n;
        cin>>n;
        
        ll a[n];
        int count = 0;
        
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        
        if(n == 1){
            cout<<"YES"<<endl;
            continue;
        }
        
        ll int index = a[0];
        a[0] = 0;
        
        for(int i=1; i<n; i++){
            if(a[i] > a[i-1]){
                index += a[i] - (a[i-1]+1);
                a[i] = a[i-1] + 1;
            }
            else if(a[i-1] == a[i]){
                if(index > 0){
                    a[i]++;
                    index--;
                }
            }
            else{
                ll int c = a[i-1] - a[i] + 1;
                if(c <= index){
                    a[i] += c;
                    index -= c;
                }

            }
        }
        for(int i=1; i<n; i++){
            if(a[i] > a[i-1]){
                count = 1;
            }
            else{
                count = 0;
                break;
            }

        }

        if(count){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}