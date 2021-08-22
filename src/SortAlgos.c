#include "SortAlgos.h"
#include <memory.h>

void InsertSort(int *nums, int numsSize) {
    for (int i = 1; i < numsSize; i++) {
        int tmp = nums[i];
        int j;
        for (j = 0; j < i; j++) {
            if ( nums[i - j - 1] > tmp) {
                nums[i - j] = nums[i - j - 1];
            } else {
                nums[i - j] = tmp;
                break;
            }
        }
        if (j == i) {
            nums[0] = tmp;
        }
    }
}