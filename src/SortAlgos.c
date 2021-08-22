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

void MergeSort(int *nums, int numsSize) {
    if (numsSize <= 1) return;
    int tmpNums[numsSize];
    int *p1 = memcpy(tmpNums, nums, numsSize * sizeof(int));
    int remainSize = numsSize - numsSize / 2;
    int *p2 = tmpNums + numsSize / 2;
    MergeSort(p1, numsSize / 2);
    MergeSort(p2, remainSize);
    int pos1 = 0;
    int pos2 = 0;
    for (int i = 0; i < numsSize; i++) {
        int tmp;
        if (pos1 == numsSize / 2) {
            tmp = p2[pos2++];
        } else if (pos2 == remainSize) {
            tmp = p1[pos1++];
        } else if (p1[pos1] < p2[pos2]) {
            tmp = p1[pos1++];
        } else {
            tmp = p2[pos2++];
        }
        nums[i] = tmp;
    }
}