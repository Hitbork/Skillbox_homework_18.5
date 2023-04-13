#include <iostream>

// Function to count how much there are ways to jump over steps
int number_of_ways(int steps) {
    if (steps <= 2) {
        return steps;
    }

    if (steps == 3) {
        return 4;
    }

    return number_of_ways(steps - 1) + number_of_ways(steps - 2) + number_of_ways(steps - 3);
}

int main() {
    // Greetings
    std::cout << "Rabbit down the hole\n\n\n";

    // Creating var and requesting data
    int steps;

    std::cout << "Insert number of steps rabbit wanna jump over: ";
    std::cin >> steps;
    std::cout << "\n";

    // Outputting results
    std::cout << "Result: " << number_of_ways(steps) << "\n";
}
