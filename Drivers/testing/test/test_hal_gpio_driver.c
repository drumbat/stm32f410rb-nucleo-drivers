#include "unity.h"
#include "../lib/stm32f410rx.h"

void test_TheFirst(void)
{
    TEST_IGNORE_MESSAGE("Implement Me");
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_TheFirst);
    return UNITY_END();
}