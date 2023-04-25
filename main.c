#include <stdio.h>
#include "function.h"

int main(){
    int nums[6] = {30, 50, 37, 25, 55};
    int size = 5, target = 55;
    int *sum = 0, *returnSize = 0;
    
    sum = twoSum(nums, size, target, &returnSize);
    for (int i = 0; i < 2; i++)
        printf("%d ", sum[i]);
    
    printf("\n");
    return 0;
}