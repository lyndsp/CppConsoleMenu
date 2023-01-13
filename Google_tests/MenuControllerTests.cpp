#include "gtest/gtest.h"
#include "MenuController.h"

TEST(MenuControllerTests, MenuControllerHasItems){

    MenuOperations operations = PopulateMenu();

    ASSERT_EQ(operations.size(), 2);
}
