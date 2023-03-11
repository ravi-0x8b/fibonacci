#include <iostream>

int main() {
    int fib[3] = { 0, 1, 0 };
    
    while (fib[0] < 0xff) {
        std::cout << fib[0] << ' ';
        fib[2] = fib[0] + fib[1];
        fib[0] = fib[1];
        fib[1] = fib[2];
    }
    return 0;
}
