#include <iostream>
using namespace std;

int main() {
    int size, count = 0;
    cin >> size;
    int arr[2*size];
    cin >> arr[0];

    for (int i = 1; i < 2*size; i++) {
        cin >> arr[i];
        if (arr[i] == arr[i - 1])
            count++;
    }

    if (count == 2*size - 1) {
        cout << -1;
        return 0;
    }

    for (int i = 0; i < 2*size - 1; i++) {
        for (int j = i + 1; j < 2*size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 2*size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
