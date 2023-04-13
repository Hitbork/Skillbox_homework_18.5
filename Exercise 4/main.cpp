#include <iostream>

void even_digits(long long &n, int &ans) {
    if (n != 0) {
        if (((n % 10) % 2) == 0) {
            ans++;
        }
        n /= 10;
        even_digits(n, ans);
    }
}



int main() {
    // Greetings
    std::cout << "How many there are even numbers?\n\n\n";


    // Creating var and requesting data
    long long n;
    std::cout << "Insert number:\n";
    std::cin >> n;
    std::cout << "\n\n";

    int ans = 0;
    even_digits(n, ans);
    std::cout << "Result: "<< ans << "\n";
}
