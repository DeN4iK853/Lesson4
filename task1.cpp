#include <iostream>

int main () {
    int a, b ,sum;
    std::cout << "Enter the number 1\n";
    std::cin >> a;
    std::cout << "Enter the number 2\n";
    std::cin >> b;
    sum = a + b;
    std::cout << "Sum of numbers\n" << sum;
        if (sum>=10 && sum<=20) {
            std::cout << "This is true\n";
        }
        if (sum<=10 && sum>=20) {
            std::cout << "This is false\n";
        } 
        return 0;
}