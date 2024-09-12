#include <iostream>

void printEvenNumbers(int n) {
    if (n > 50) {
        return;
    }
    std::cout << n << std::endl;
    printEvenNumbers(n + 2);
}

int main() {
    printEvenNumbers(2); 
    return 0;
}
