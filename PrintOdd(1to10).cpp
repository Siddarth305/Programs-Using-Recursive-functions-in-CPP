#include <iostream>

void printoddNumbers(int n) {
    if (n > 10) {
        return;
    }
    std::cout << n << std::endl;
    printoddNumbers(n + 2);
}

int main() {
    printoddNumbers(1); 
    return 0;
}
