#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        if(a>=x){
            if(b>=y){
                cout<<"YES"<<endl;
            }
            else{
                long long int m=0;
                m=b+c;
                if(m>=y){
                    cout<<"YES"<<endl;
                }
                else{
                   cout<<"NO"<<endl;
                }
            }
        }
        else{
            long long int n=0;
            n=a+c;
            
                
            if(n>=x){
                if(b>=y){
                    cout<<"YES"<<endl;
                }
                else{
                    c=c-(x-a);
                    
                    long long int mm=0;
                    mm=b+c;
                    
                
                    if(mm>=y){
                        cout<<"YES"<<endl;
                    }
                    else{
                       cout<<"NO"<<endl;
                    }
                
                }
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    
    }
    return 0;
}
