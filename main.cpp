#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 0; i < 50; i++) {
        sum += i; // Sum of numbers from 0 to 49
    }

    cout << "Sum: " << sum << endl;
    cout << "Average: " << sum / 50 << endl;

    int arr[50];
    cout << "Odd numbers: ";
    for (int i = 0; i < 50; i++) {
        arr[i] = i;
        if (arr[i] % 2 != 0) { // Check if the number is odd
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;

}
