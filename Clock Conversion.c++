#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a;
        string str;
        cin>>a;
        cin>>str;
        if(a==00){
            cout<<"12"<<str<<" AM"<<endl;
        }
        else if(a<12){
            if(a<10){
                cout<<"0"<<a<<str<<" AM"<<endl;
            }else{
                cout<<a<<str<<" AM"<<endl;
            }
        }
        else{
            int m=(a-12);
            if(m==0){
                cout<<12<<str<<" PM"<<endl;
            }
            else if(m<10){
                cout<<"0"<<a-12<<str<<" PM"<<endl;
            }else{
                cout<<a-12<<str<<" PM"<<endl;
            }
        }
    }

    return 0;
}