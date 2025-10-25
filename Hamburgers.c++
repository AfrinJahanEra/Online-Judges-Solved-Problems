#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    string str;
    cin>>str;

    ll nb,ns,nc;
    ll pb,ps,pc;

    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;

    ll r;
    cin>>r;

    ll bread=0, sausage=0, cheese=0;

    for(auto &s:str){
        if(s=='B') bread++;
        else if(s=='S') sausage++; 
        else cheese++;
    }

    ll low=0 , high=r+200;

    while(low<=high){
        ll mid=low+(high-low)/2;
        ll n=0;
        ll rb=max(bread*mid - nb , n);
        ll rs=max(sausage*mid - ns , n);
        ll rc=max(cheese*mid - nc , n);

        ll price=rb*pb+rs*ps+rc*pc;
        
        if(price<=r) low=mid+1;
        else high = mid - 1;
    }

    cout<<high;

    return 0;
    
}
