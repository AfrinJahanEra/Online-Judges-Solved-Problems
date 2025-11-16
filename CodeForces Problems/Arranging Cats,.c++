#include <iostream>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        
        string a,b;
        cin>>a;
        cin>>b;
        
        int counta=0,countb=0,count1=0,count2=0;
        
        for(int i=0;i<n;i++){
            if(a[i]=='1'){
                counta++;
            }
            if(b[i]=='1'){
                countb++;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                count1++;
            }
            if(counta>=countb){
                if(b[i]=='1'&&a[i]=='0'){
                    count2++;
                }
            }
            else{
                if(b[i]=='0'&&a[i]=='1'){
                    count2++;
                }
            }
        }
        
        if(counta>=countb){
            cout<<abs(count1-count2)<<endl;
        }
        else{
            cout<<abs(counta-countb)+count2<<endl;
        }
    }

    return 0;
}
