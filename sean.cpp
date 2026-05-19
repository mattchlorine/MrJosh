#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int temp;

    // Input 10 numbers
    cout << "Enter 10 numbers:\n";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    // Sequential Sort, checking if number big or smaller
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (numbers[i] > numbers[j]) {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    // Display sorted numbers
    cout << "\nSorted numbers in ascending order:\n";
    for (int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}