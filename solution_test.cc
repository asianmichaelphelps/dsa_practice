#include "solution.h"

#include <gtest/gtest.h>

TEST(SolutionTest, foundOnlyNum) {
  std::vector<int> example = {2, 1, 2, 4, 1};
  EXPECT_EQ(FindNum(example), 4);
}

