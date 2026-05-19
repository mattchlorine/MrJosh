#include <iostream>

using namespace std;
//selection checks each of the position one by one and then finds the candidate for the smallest, and so on
//kinda like survival of the fittest
int main () {
    int numbers[10] = {};

    cout << "===Selection Sort===" << endl; //this prints out a cool title
        for (int i = 0; i < 10; i++) { //this is a loop that requests the user to put in the numbers 10 times
        cout << "Put number NOW! HERE:"; 
        cin >> numbers[i];
        }

    cout << "Unsorted Numbers: " << endl; //this shows the unsorted number
        for (int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    //SELECTION SORT ALG
    for (int i = 0; i < 10; i++) {
        int active_numbers = numbers[i];
        int correct_position = i;

        //SELECTION SORT CHECKING ALG
        //Once we find the correct number, we keep it in its place
        for (int j = i; j < 10; j++) {
            if (numbers [j] < active_numbers) {
                active_numbers = numbers[j];
                correct_position = j;
            }
        }
        //swap if we find a smaller candidate
        if(correct_position != i) {
            int temp = numbers[i];
            numbers[i] = numbers[correct_position];
            numbers[correct_position] = temp;
        }
    }

    cout << "Sorted Numbers: "<< endl; //this shows the user the sorted numbers
        for (int i = 0; i < 10; i++) {
        cout << numbers[i];
    }
    cout << endl;

}