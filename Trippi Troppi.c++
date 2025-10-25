#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); 
    
    while (t--) {
        
        string line;
        getline(cin, line);
        istringstream iss(line);
        string word;
        string result;
        
        while (iss >> word) {
            if (!word.empty()) {
                result += word[0];
            }
        }
        
        cout << result << endl;
    }
    
    return 0;
}