#include "gtest/gtest.h"
#include "../src/math.cpp"

using namespace std;

TEST(TestSuite, Test1) {
    ASSERT_EQ(addition(2,2),4);
}
