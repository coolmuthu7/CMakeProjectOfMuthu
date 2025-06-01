#include <gtest/gtest.h>
#include "CMakeProjectOfMuthu.h"

TEST(AddFunctionTest, BasicAddition) {
    int a = 3;
    int b = 4;
    EXPECT_EQ(addfunction(a, b), 7);
}