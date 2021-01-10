#include <gtest/gtest.h>
#include "funciones_complejo.h"

TEST(Complejo, add) {
    ASSERT_EQ(2, add(1, 1));
    ASSERT_EQ(5, add(3, 2));
    ASSERT_EQ(10, add(7, 3));
}

TEST(Complejo, sub) {
    ASSERT_EQ(3, sub(5, 2));
    ASSERT_EQ(-10, sub(5, 15));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}