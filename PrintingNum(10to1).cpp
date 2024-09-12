#include <iostream>

void printNumbers(int n) {
    if (n < 1) {
        return;
    }
    std::cout << n << std::endl;
    printNumbers(n - 1);
}

int main() {
    printNumbers(10);
    return 0;
}
