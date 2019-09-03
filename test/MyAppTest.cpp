#include "../MyApp.h"
#include "gtest/gtest.h"

TEST(multiply1by1, base)
{
    EXPECT_EQ(1, MyApp::multiply(1,1));
}

TEST(multyply1by2, base)
{
    EXPECT_EQ(2, MyApp::multiply(1,2));
}