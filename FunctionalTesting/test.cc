#include "src_v1.cpp"

#include "gtest/gtest.h"

TEST(getPayment, TestAB1_1) {
    EXPECT_THROW(getPayment(-1, -1, VtPay), std::invalid_argument);
}

TEST(getPayment, TestA1_1) {
    EXPECT_THROW(getPayment(-1, 10, VtPay), std::invalid_argument);
}

TEST(getPayment, TestB1_1) {
    EXPECT_THROW(getPayment(70, -1, VtPay), std::invalid_argument);
}

TEST(getPayment, TestB2_1) {
    EXPECT_EQ(getPayment(70,0, VtPay), 115023);
}

TEST(getPayment, TestB2_2) {
    EXPECT_EQ(getPayment(70, 1, VtPay), 115022);
}

TEST(getPayment, TestB2_3) {
    EXPECT_EQ(getPayment(70, 50000, VtPay), 66523);
}

TEST(getPayment, TestB2_4) {
    EXPECT_EQ(getPayment(70, 118579, VtPay), 1);
}

TEST(getPayment, TestB2_5) {
    EXPECT_EQ(getPayment(70, 118580, VtPay), 0);
}

TEST(getPayment, TestC2_1) {
    EXPECT_EQ(getPayment(70, 50000, C4ke), 68580);
}

TEST(getPayment, TestB3_1) {
    EXPECT_EQ(getPayment(70, 118581, VtPay), 0);
}

TEST(getPayment, TestB3_2) {
    EXPECT_EQ(getPayment(70, 118582, VtPay), 0);
}

TEST(getPayment, TestB3_3) {
    EXPECT_EQ(getPayment(70, 300000, VtPay), 0);
}

TEST(getPayment, TestA2_1) {
    EXPECT_EQ(getPayment(0, 0, VtPay), 0);
}

TEST(getPayment, TestA2_2) {
    EXPECT_EQ(getPayment(1, 50, VtPay), 1580);
}

TEST(getPayment, TestA2_3) {
    EXPECT_EQ(getPayment(25, 50, VtPay), 40643);
}

TEST(getPayment, TestA2_4) {
    EXPECT_EQ(getPayment(49, 50, VtPay), 79707);
}

TEST(getPayment, TestA2_5) {
    EXPECT_EQ(getPayment(50, 50, VtPay), 81335);
}

TEST(getPayment, TestA3_1) {
    EXPECT_EQ(getPayment(51, 50, VtPay), 83017);
}

TEST(getPayment, TestA3_2) {
    EXPECT_EQ(getPayment(52, 50, VtPay), 84699);
}

TEST(getPayment, TestA3_3) {
    EXPECT_EQ(getPayment(99, 50, VtPay), 163752);
}

TEST(getPayment, TestA3_4) {
    EXPECT_EQ(getPayment(100, 50, VtPay), 165434);
}

TEST(getPayment, TestA4_1) {
    EXPECT_EQ(getPayment(101, 50, VtPay), 167388);
}

TEST(getPayment, TestA4_2) {
    EXPECT_EQ(getPayment(102, 50, VtPay), 169341);
}

TEST(getPayment, TestA4_3) {
    EXPECT_EQ(getPayment(150, 50, VtPay), 263113);
}

TEST(getPayment, TestA4_4) {
    EXPECT_EQ(getPayment(199, 50, VtPay), 358838);
}

TEST(getPayment, TestA4_5) {
    EXPECT_EQ(getPayment(200, 50, VtPay), 360792);
}

TEST(getPayment, TestA5_1) {
    EXPECT_EQ(getPayment(201, 50, VtPay), 363252);
}

TEST(getPayment, TestA5_2) {
    EXPECT_EQ(getPayment(202, 50, VtPay), 365712);
}

TEST(getPayment, TestA5_3) {
    EXPECT_EQ(getPayment(250, 50, VtPay), 483788);
}

TEST(getPayment, TestA5_4) {
    EXPECT_EQ(getPayment(299, 50, VtPay), 604324);
}

TEST(getPayment, TestA5_5) {
    EXPECT_EQ(getPayment(300, 50, VtPay), 606784);
}

TEST(getPayment, TestA6_1) {
    EXPECT_EQ(getPayment(301, 50, VtPay), 609533);
}

TEST(getPayment, TestA6_2) {
    EXPECT_EQ(getPayment(302, 50, VtPay), 612282);
}

TEST(getPayment, TestA6_3) {
    EXPECT_EQ(getPayment(350, 50, VtPay), 744233);
}

TEST(getPayment, TestA6_4) {
    EXPECT_EQ(getPayment(399, 50, VtPay), 878933);
}

TEST(getPayment, TestA6_5) {
    EXPECT_EQ(getPayment(400, 50, VtPay), 881682);
}

TEST(getPayment, TestA7_1) {
    EXPECT_EQ(getPayment(401, 50, VtPay), 884521);
}

TEST(getPayment, TestA7_2) {
    EXPECT_EQ(getPayment(402, 50, VtPay), 887360);
}

TEST(getPayment, TestA7_3) {
    EXPECT_EQ(getPayment(1000, 50, VtPay), 2585196);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}