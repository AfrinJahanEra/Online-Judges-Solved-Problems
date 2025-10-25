#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin>>n;
        int count=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                int count=0;
                while(count<2){
                    for(int j=0;j<n;j++){
                        if(j%2==0){
                            cout<<"##";
                        }
                        else{
                            cout<<"..";
                        }
                    }
                    cout<<endl;
                    count++;
                }
            }else{
                int count=0;
                while(count<2){
                    for(int j=0;j<n;j++){
                        if(j%2!=0){
                            cout<<"##";
                        }
                        else{
                            cout<<"..";
                        }
                    }
                    cout<<endl;
                    count++;
                }
            }
        }
    }

    return 0;
}
