#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string name;

    // prompt the user for input using cout
    std::cout << "Enter your name: ";

    // acept user input using cin
    std::cin >> name;

    // print out the using cout
    std::cout << "Hello" << name << std::endl;

    return 0;
}

