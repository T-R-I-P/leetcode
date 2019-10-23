#include <iostream>
#include <gtest/gtest.h>
#include <memory>

#include "sol.hpp"

class SolutionTest : public ::testing::Test {
  public:
    unique_ptr<Solution> ptr;
    void SetUp() {
      // code here will execute just before the test ensues
      ptr = make_unique<Solution>();
    }
    void TearDown() { 
    // code here will be called just after the test completes
    // ok to through exceptions from here if need be
    }
};

namespace {
}

int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
