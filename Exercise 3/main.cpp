#include <iostream>

int n, k;

int f(int n, int i) {

    if (n == 0) {
        return 1;
    }

    if (n < 0 || i < 1) {
        return 0;
    }

    return  f(n-i, k) + f(n, i-1);
}

int main() {
    // Greetings
    std::cout << "Rabbit down the hole 2\n\n\n";

    // Requesting data
    std::cout << "Insert how many there are steps:\n";
    std::cin >> n;

    std::cout << "Insert max amount of steps to jump:\n";
    std::cin >> k;


    // Outputting
    std::cout <<  "Result: " << f(n, k) << "\n";
}
