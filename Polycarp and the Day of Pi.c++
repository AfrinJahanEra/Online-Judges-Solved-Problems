#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string s="3141592653589793238462643383279";
    while(t--){
        string k;
        cin>>k;
        int i,counter=0,len;
        len=k.size();
        for(i=0;i<len;i++){
            if(s[i]==k[i])counter++;
            else break;
        }
        cout<<counter<<endl;
    }
    return 0;
}
