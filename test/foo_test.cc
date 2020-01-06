#include "foo.h"

#include "gtest/gtest.h"

class FooTest : public ::testing::Test {
 protected:
  virtual void TearDown() {

  }
  virtual void SetUp() {

  }
};

TEST_F(FooTest, Bar) {
  ASSERT_EQ(3, Foo().Bar(3));
}
