#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    deque<int> d;
    string cmd;
    int rev=0;
    while(t--){
        cin>>cmd;
        if(cmd=="reverse"){
            if(rev==0){
                rev=1;
            }else{
                rev=0;
            }
        }else if(cmd=="push_back"){
            int n;
            cin>>n;
            if(rev){
                d.push_front(n);
            }
            else{
                d.push_back(n);
            }
        }else if(cmd=="toFront"){
            int n;
            cin>>n;
            if(rev){
                d.push_back(n);
            }
            else{
                d.push_front(n);
            }
        }else if(cmd=="front"){
            if(d.empty()){
                cout<<"No job for Ada?"<<endl;
            }
            else if(rev){
                cout<<d.back()<<endl;
                d.pop_back();
            }else{
                cout<<d.front()<<endl;
                d.pop_front();
            }
        }else if(cmd=="back"){
            if(d.empty()){
                cout<<"No job for Ada?"<<endl;
            }
            else if(rev){
                cout<<d.front()<<endl;
                d.pop_front();
            }else{
                cout<<d.back()<<endl;
                d.pop_back();
            }
        }
    }
    return 0;
}