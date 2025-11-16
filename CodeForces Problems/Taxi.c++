#include <iostream>
using namespace std;

int main()
{
    int n, s;
    int count[5] = {0};
    
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        count[s] += 1;
    }
    
    int count1 = count[4] + count[3] + count[2] / 2;
    count[1] -= count[3];
    
    if (count[2] % 2 == 1){
        count1 += 1;
        count[1] -= 2;
    }
    
    if (count[1] > 0){
        count1 += (count[1] + 3) / 4;
    }
    
    cout << count1 << endl;
    return 0;
}
