#include <iostream>

void printNumbers(int n) {
    if (n > 10) {
        return;
    }
    std::cout << n << std::endl;
    printNumbers(n + 1);
}

int main() {
    printNumbers(1);
    return 0;
}
