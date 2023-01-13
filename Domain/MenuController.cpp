#include <string>
#include "MenuController.h"

MenuOperations PopulateMenu() {
    MenuOperations operations;

    operations["i"] = new Operation("Info (i)");
    operations["q"] = new Operation("Exit (q)");

    return  operations;
}