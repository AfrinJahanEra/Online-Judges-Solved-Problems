#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;

    size_t point = str.find('.');

    if (str[point - 1] == '9')
    {
        cout << "GOTO Vasilisa." << endl;
    }
    else
    {
        if (str[point + 1] >= '5')
        {
            str[point - 1] += 1;
        }

        str.erase(str.begin() + point, str.end());

        cout << str << endl;
    }

    return 0;
}