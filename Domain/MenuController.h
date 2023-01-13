#ifndef CPPCONSOLEMENU_MENUCONTROLLER_H
#define CPPCONSOLEMENU_MENUCONTROLLER_H

#include <map>
#include "Operation.h"

typedef std::map<std::string, Operation*> MenuOperations;
MenuOperations PopulateMenu();

#endif //CPPCONSOLEMENU_MENUCONTROLLER_H
