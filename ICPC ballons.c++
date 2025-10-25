#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        
        string str;
        cin >> str;

        int a[100]={0};
        
        for (int i = 0;str[i]!='\0'; i++) {
            if(a[str[i]-'0']==0){
                a[str[i]-'0']=2;
            }
            else{
                a[str[i]-'0']++;
            }
        }
        
        int sum=0;
        
        for(int i=0;i<100;i++){
            sum+=a[i];
        }
        
        cout<<sum<<endl;
    }
    return 0;
}
