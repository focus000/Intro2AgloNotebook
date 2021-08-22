#include <stdio.h>
#include "../src/SortAlgos.h"

int main() {
    int nums[] = {3, 23, 76, 98, 1, 98, 22, 4, 0, 8, -3};
    int len = sizeof(nums) / sizeof(int);
    // InsertSort(nums, len);
    MergeSort(nums, len);
    for (int i = 0; i < len; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}