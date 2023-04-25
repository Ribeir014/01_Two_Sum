#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// fiz uma mudanca
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *twoSum = (int*)malloc(sizeof(int) * 2);
    *returnSize = 2;
    for (int i=0;i<numsSize;i++) {
        for (int j=0;j<numsSize;j++) {
            if((nums[i] + nums[j]) == target && i != j) {
                twoSum[0] = i;
                twoSum[1] = j;
                return twoSum;
            }
        }
    }
    return NULL;
}
