#include <gtest/gtest.h>
#include "fact.h"

TEST(FactTest, BasicFact)
{
    EXPECT_EQ(fact(0), 1);
}