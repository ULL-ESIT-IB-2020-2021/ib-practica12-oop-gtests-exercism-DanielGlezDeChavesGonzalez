#include <gtest/gtest.h>
#include "funciones_fecha.h"

TEST(Fecha, add) {
    ASSERT_EQ(true, bisiesto(2020));
    ASSERT_EQ(false, bisiesto(1951));
}

TEST(Fecha, sub) {
    ASSERT_EQ(false, operator<(5, 2));
    ASSERT_EQ(true, operator(5, 15));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}