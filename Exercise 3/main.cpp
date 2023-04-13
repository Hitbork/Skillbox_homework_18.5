#include <iostream>

int k = 3;

int amount_of_ways(int n, int i = 3) {

    if (n == 0) {
        return 1;
    }

    if (n < 0 || i < 1) {
        return 0;
    }

    return amount_of_ways(n-i, k) + amount_of_ways(n, i-1);
}

int main() {
    // Greetings
    std::cout << "Rabbit down the hole pt.2\n\n\n";

    // Requesting data
    int n;
    std::cout << "Insert how many there are steps:\n";
    std::cin >> n;

    std::cout << "Insert max amount of steps to jump:\n";
    std::cin >> k;


    // Outputting
    std::cout <<  "Result: " << amount_of_ways(n, k) << "\n";
}
