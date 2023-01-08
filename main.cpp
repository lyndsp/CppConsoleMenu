#include <iostream>
#include "Domain/Operation.h"

int main() {

    Operation *operation = new Operation();

    std::cout << "Hello, World!" << std::endl;
    std::cout << operation->Menu() << std::endl;

    return 0;
}
