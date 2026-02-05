#include <iostream>
#include <string>
#include <gtest/gtest.h>
#include "StringCalculator.h"

using namespace std;

struct StringCalculatorData {
    string inpString;
    int expectedResult;
};

class StringCalculatorTests : public testing::TestWithParam<StringCalculatorData>
{
    protected:
    static void SetUpTestSuite() 
    {
        cout<<"TestSuite Setup"<<endl;
    }

    static void TearDownTestSuite()
    {
        cout<<"TestSuite Teardown"<<endl;
    }

    void SetUp() override
    {
        cout<<"Testcase Setup"<<endl;
    }

    void TearDown() override
    {
        cout<<"Testcase Teardown"<<endl;
    }
};

INSTANTIATE_TEST_SUITE_P( StringCalculatorGroup, StringCalculatorTests,
    testing::Values(
        StringCalculatorData{"1,2", 3},
        StringCalculatorData{"", 0}
    )
);

TEST_P(StringCalculatorTests, Tests)
{
    StringCalculator obj;
    const auto &data = GetParam();
    int actualResult = obj.Add(data.inpString);
    EXPECT_EQ(actualResult, data.expectedResult);
}