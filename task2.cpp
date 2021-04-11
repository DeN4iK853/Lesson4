#include <iostream>
int main () {
    int n;
    int flag;
    int i   ;
    std::cout << "Enter a number:\n";
    std::cin >> n;
    for (int i = 2, flag=0; i<n; i++) {
        if (!(n%i))
        flag=1;
    if (!flag)
       std::cout << "Number" <<n<< "is simple\n";
    else
       std::cout << "Number" <<n<< "is not simple\n";
    }
    return 0;
}