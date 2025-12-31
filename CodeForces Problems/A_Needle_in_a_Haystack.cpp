#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int n=b.size(),m=a.size();
        vector<int> ct(26,0),ca(26,0);
        for(char c:b){
            ct[c-'a']++;
        }
        for(char c:a){
            ca[c-'a']++;
        }
        int f=1;
        for(int i=0;i<26;i++){
            if(ct[i]<ca[i]){
                f=0;
                break;
            }
        }
        if(!f){
            cout<<"Impossible\n";
            continue;
        }
        vector<int> r=ct,ne=ca,d(26);
        for(int i=0;i<26;i++){
            
            d[i]=r[i]-ne[i];
        }
        int idx=0;
        string an="";
        for(int i=0;i<n;i++){
            if(idx==m){
                for(int c=0;c<26;c++){
                    if(r[c]>0){
                        an+=char('a'+c);
                        r[c]--;
                        d[c]--;
                        break;
                    }
                }
            }
            else{
                int x=a[idx]-'a';
                int fl=0;
                for(int c=0;c<26;c++){
                    if(r[c]==0){
                        continue;
                    }
                    if(c==x){
                        an+=char('a'+c);
                        r[c]--;
                        ne[c]--;
                        
                        
                        
                        idx++;
                        fl =1;
                        break;
                    }
                    else if(d[c]>=1){
                        an+=char('a'+c);
                        r[c]--;
                        d[c]--;
                        fl=1;
                        break;
                    }
                    
                }
                if(!fl){
                    break;
                }
            }
        }
        cout<<an<<"\n";
    }
    return 0;
}