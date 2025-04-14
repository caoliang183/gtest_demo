// test/math_utils_test.cpp
#include <gtest/gtest.h>
#include "math_utils.hxx"

class MathUtilsTest : public ::testing::Test{
public:
    void SetUp() override {}
    void TearDown() override {}
};

TEST_F(MathUtilsTest, AddTest){
    EXPECT_EQ(MathUtils::add(2, 3), 5);

}
TEST_F(MathUtilsTest, AddTest2){
    EXPECT_EQ(MathUtils::add(-2, 3), 1);

}
TEST_F(MathUtilsTest, AddTest3){
    EXPECT_EQ(MathUtils::add(0, 0), 0);

}

TEST_F(MathUtilsTest, SubtractTest){
    EXPECT_EQ(MathUtils::subtract(5, 3), 2);

}
TEST_F(MathUtilsTest, SubtractTest2){

    EXPECT_EQ(MathUtils::subtract(3, 5), -2);

}
TEST_F(MathUtilsTest, SubtractTest3){

    EXPECT_EQ(MathUtils::subtract(0, 0), 0);
    // 更多测试用例...
}

TEST_F(MathUtilsTest, MultiplyTest){
    EXPECT_EQ(MathUtils::multiply(2, 3), 6);

}
TEST_F(MathUtilsTest, MultiplyTest2){

    EXPECT_EQ(MathUtils::multiply(-2, 3), -6);

}
TEST_F(MathUtilsTest, MultiplyTest3){
    EXPECT_EQ(MathUtils::multiply(0, 5), 0);
    // 更多测试用例...
}

TEST_F(MathUtilsTest, DivideTest){
    EXPECT_DOUBLE_EQ(MathUtils::divide(6, 3), 2);

}
TEST_F(MathUtilsTest, DivideTest2){
    EXPECT_DOUBLE_EQ(MathUtils::divide(-6, 3), -2);

}    
