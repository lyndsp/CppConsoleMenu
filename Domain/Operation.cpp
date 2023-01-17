#include <iostream>
#include "Operation.h"

const char * Operation::Menu() {
    return this->menuText;
}

void Operation::ShowMenu(std::ostream &outputStream) {

    outputStream << menuText;
}

void Operation::Execute(std::istream &inputStream, std::ostream &outputStream) {

    std::string data;
    inputStream >> data;

    outputStream << data;
}
