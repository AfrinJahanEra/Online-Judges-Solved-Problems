#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int lst=-1,an=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                if(i>lst){
                    lst=i+k;
                }
                else{
                    lst=max(lst,i+k);
                }
            }
            else if(i>lst){
                an++;
            }
        }
        cout<<an<<endl;
    }
    return 0;
}