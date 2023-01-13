#include "gtest/gtest.h"
#include "Operation.h"

class OperationTestFixture : public ::testing::Test {
protected:
    virtual void SetUp()
    {
        operation = new Operation();
    }

    virtual void TearDown() {
        delete operation;
    }

    Operation *operation;
};

TEST_F(OperationTestFixture, operationsHaveDefaultMenuText){

    const char *menu = operation->Menu();

    EXPECT_STREQ(menu, "Menu not set");
}

TEST_F(OperationTestFixture, menuTextCanBeSetAtConstruction){

    const char *expectedText = "Expected menu";

    operation = new Operation(expectedText);

    const char *menu = operation->Menu();

    EXPECT_STREQ(menu, expectedText);
}
