#include "unit_test_tmp_class.h"

TEST(tmp_class, addToNumber_test)
{
    TmpClass tmp(5);

    tmp.addToNumber(5);
    tmp.addToNumber(10);

    int actual = tmp.readNumber();
    int expected = 20;

    ASSERT_EQ(actual, expected);
}