
#include<iostream>
#define ll long long
using namespace std;

int main()
{
    ll int n,m;
    cin >> n >> m;
    ll int time=0;
    ll int a[100000];
    int c=1;
    for(ll int i=0;i<m;i++)
    {
        cin >> a[i];
        if(a[i]<c)
        {
            time=time-c+n+a[i];
            c=a[i];
        }
        else if(a[i]>c)
        {
            time=time-c+a[i];
            c=a[i];
        }
    }
    cout << time << endl;
    return 0;
}
