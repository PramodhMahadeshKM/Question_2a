#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "unity\unity.h"
#include "inc\data.h"

/* Required by the unity test framework */
void setUp(){}
void tearDown(){}

void test_empty(void)
{
    TEST_ASSERT_EQUAL(1,read_arr("data.csv"));
    TEST_ASSERT_EQUAL(0,read_arr("xyz.csv"));

}


int main(void)
{
    read_arr("data.csv");
    sort(arr);
    display(arr);

    UNITY_BEGIN();
    RUN_TEST(test_empty);

    
    
     return UNITY_END();
}
