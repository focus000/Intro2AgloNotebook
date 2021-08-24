#include "gtest/gtest.h"
#include "src/SortAlgos.h"

TEST(SortAlgos, InsertSort) {
    int nums[] = {3, 23, 76, 98, 1, 98, 22, 4, 0, 8, -3};
    int resNums[] = {-3, 0, 1, 3, 4, 8, 22, 23, 76, 98, 98};
    int len = sizeof(nums) / sizeof(int);
    InsertSort(nums, len);
    for (int i = 0; i < len; i++) {
        EXPECT_EQ(nums[i], resNums[i]) << " differ at index " << i;
    }
}