#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>pos(n+1);
    for(int i=0;i<n;++i){
        cin>>a[i];
        pos[a[i]]=i;

    }
    int an=1;
    for(int i=1;i<n;++i){



        if(pos[i]>pos[i+1]){
            an++;
        }
    }
    while(m--){
        int p,q;
        cin>>p>>q;
        p--;q--;
        if(p== q){
            cout<<an<<"\n";
            continue;
        }
        int x=a[p],y=a[q];
        vector<int>v;
        if(x>1)v.push_back(x-1);


        if(x<n)v.push_back(x);
        if(y>1)v.push_back(y-1);
        if(y<n)v.push_back(y);

        sort(v.begin(),v.end());

        v.erase(unique(v.begin(),v.end()),v.end());


        for(int i:v){
            if(pos[i]>pos[i+1]){
                an--;
            }
        }
        swap(a[p],a[q]);
        swap(pos[x],pos[y]);
        for(int i:v){
            if(pos[i]>pos[i+1]){

                
                an++;
            }
        }   
        cout<<an<<"\n";
    }
    return 0;
}