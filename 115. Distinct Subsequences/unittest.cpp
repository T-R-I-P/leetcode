#include <iostream>
#include <gtest/gtest.h>

#include "sol.hpp"

class SolutionTest : public ::testing::Test {
  public:
    void SetUp() {
      // code here will execute just before the test ensues 
    }
    void TearDown() { 
    // code here will be called just after the test completes
    // ok to through exceptions from here if need be
    }
};

namespace {
  TEST(numDistinct, Case1) {
    string S("rabbbit");  
    string T("rabbit");
    Solution sol;
    int result = sol.numDistinct(S, T);
    ASSERT_EQ(3, result);
  }

  TEST_F(SolutionTest, UnitTest1) {
    string S("rabbbit");  
    string T("rabbit");
    Solution sol;
    int result = sol.numDistinct(S, T);
    ASSERT_EQ(3, result);
  }
}

int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
