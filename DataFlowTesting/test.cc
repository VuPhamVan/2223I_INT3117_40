#include "src_v2.cpp"

#include "gtest/gtest.h"

TEST(getPayment, Test_df1) {
    EXPECT_EQ(getPayment(50,0, C4ke), 83900);
}

TEST(getPayment, Test_df2) {
    EXPECT_EQ(getPayment(100,0, C4ke), 170600);
}


TEST(getPayment, Test_df3) {
    EXPECT_EQ(getPayment(200,0, C4ke), 372000);
}

TEST(getPayment, Test_df4) {
    EXPECT_EQ(getPayment(300,0, C4ke), 625600);
}

TEST(getPayment, Test_df5) {
    EXPECT_EQ(getPayment(400, 0, C4ke), 909000);
}

TEST(getPayment, Test_df6) {
    EXPECT_EQ(getPayment(500,0, C4ke), 1201700);
}

TEST(getPayment, Test_df7) {
    EXPECT_EQ(getPayment(0, 0, VtPay), 0);
}

TEST(getPayment, Test_df8) {
    EXPECT_EQ(getPayment(0, 10, VtPay), 0);
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}