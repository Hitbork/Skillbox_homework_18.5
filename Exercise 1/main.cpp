#include <iostream>
#include <vector>

// Function to swap numbers
void swapvec(std::vector<int> &a, int b[]) {
    for (int i = 0; i < a.size(); i++)
        std::swap(a[i], b[i]);
}

int main() {
    // Greetings
    std::cout << "Swapper of number\n\n\n";

    // Creating vars
    std::vector<int> a = {1,2,3,4};
    int b[] = {2,4,6,8};

    // Using swapper
    swapvec(a,b);

    //
    for(int i = 0; i < 4; ++i)

        std::cout << a[i] << " ";

    std::cout << std::endl;

    for(int i = 0; i < 4; ++i)

        std::cout << b[i] << " ";
}
