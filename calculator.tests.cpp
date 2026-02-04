#include <gtest/gtest.h>
#include "calculator.h"

//Test Cases
//Given 10,20 when add method called , Then result 30 is expected
TEST(CalculatorTests,AssertAddFunction){
    //Arrange - preconditions , prepare input data
    int operand1=10;
    int operand2=20;
    int actualResult=0;
    int expectedResult=30;
    //Act - invoke code under test
    actualResult=add(operand1,operand2);
    //Assert - validate measurement points
    ASSERT_EQ(actualResult,expectedResult);

}

TEST(CalculatorTests, AssertSubFunction)
{
    int op1 = 10;
    int op2 = 5;
    int actualResult = 0;
    int expectedResult = 5;
    actualResult = sub(op1, op2);
    ASSERT_EQ(actualResult, expectedResult);
}

TEST(CalculatorTests, AssertMulFunction)
{
    int op1 = 10;
    int op2 = 5;
    int actualResult = 0;
    int expectedResult = 50;
    actualResult = mul(op1, op2);
    ASSERT_EQ(actualResult, expectedResult);
}

TEST(CalculatorTests, AssertDivFunction)
{
    int op1 = 10;
    int op2 = 5;
    float actualResult = 0;
    float expectedResult = 2.0;
    actualResult = sub(op1, op2);
    ASSERT_EQ(actualResult, expectedResult);
}