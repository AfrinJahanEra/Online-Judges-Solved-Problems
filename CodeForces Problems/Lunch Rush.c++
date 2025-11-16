#include <iostream>

using namespace std;

int main()
{
    int n, k, food_quality, time_required, max_happiness, happiness;
    cin >> n >> k >> food_quality >> time_required;
    if (time_required > k)
    {
        max_happiness = food_quality - (time_required - k);
    }
    else
    {
        max_happiness = food_quality;
    }
    while (--n)
    {
        cin >> food_quality >> time_required;
        if (time_required > k)
        {
            happiness = food_quality - (time_required - k);
        }
        else
        {
            happiness = food_quality;
        }
        if (happiness > max_happiness)
        {
            max_happiness = happiness;
        }
    }
    cout << max_happiness << endl;
    return 0;
}
