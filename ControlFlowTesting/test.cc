#include "src_v2.cpp"

#include "gtest/gtest.h"

TEST(getPayment, Test_direct1) {
    EXPECT_THROW(getPayment(-1, 0, VtPay), std::invalid_argument);
}

TEST(getPayment, Test_direct2) {
    EXPECT_THROW(getPayment(50, -1, VtPay), std::invalid_argument);
}


TEST(getPayment, Test_direct3) {
    EXPECT_EQ(getPayment(100, 50, VtPay), 165434);
}

TEST(getPayment, Test_direct4) {
    EXPECT_EQ(getPayment(200, 372000, Mono), 0);
}

TEST(getPayment, Test_direct5) {
    EXPECT_EQ(getPayment(300, 200, C4ke), 625400);
}

TEST(getPayment, Test_direct6) {
    EXPECT_EQ(getPayment(400, 200, VtPay), 881536);
}

TEST(getPayment, Test_direct7) {
    EXPECT_EQ(getPayment(550, 2, VtPay), 1307607);
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}