#include "factorielle.h"
#include <gtest/gtest.h>

TEST(FactorialTest, ZeroValue) {
  EXPECT_EQ(1,factorielle(0));
}

TEST(FactorialTest, DISABLED_StandardValues) {
  EXPECT_EQ(1,factorielle(1));
  ASSERT_EQ(6,factorielle(3));
  ASSERT_EQ(24, factorielle(4));
  EXPECT_EQ(120,factorielle(5));
}

TEST(DivTest, Standard_value) {
    EXPECT_DOUBLE_EQ(2,div(4));
    EXPECT_DOUBLE_EQ(2,div());
  }

