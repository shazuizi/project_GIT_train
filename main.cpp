#include <iostream>

int Policz (int a, int b) {
    return (a+b)*(a-b);
}

int main() {
    std::cout << "W trzecim branchu:" << Policz(2,3) << std::endl;

    return 0;
 }