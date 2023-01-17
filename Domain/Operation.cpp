#include <ostream>
#include "Operation.h"

const char * Operation::Menu() {
    return this->menuText;
}

void Operation::ShowMenu(std::ostream &outputStream) {

    outputStream << menuText;
}
