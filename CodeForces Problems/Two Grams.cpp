#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c1=0;
    int c2=0;
    string s1;
    for(int i=0;i<n-1;i++){
        c1=0;
        for(int j=i;j<n-1;j++){
            if(s[i]== s[j]&&s[i+1]==s[j+1]){
                c1++;
                if(c2<c1){

                    c2=c1;
                    s1=string(1,s[i])+string(1,s[i+1]);
                }
            }
        }
    }
    cout<<s1<<endl;
    return 0;
}
