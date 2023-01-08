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

TEST_F(OperationTestFixture, operationsHaveMenuText){

    const char *menu = operation->Menu();

    EXPECT_STREQ(menu, "Menu text");
}
