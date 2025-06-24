/*
 * @lc app=leetcode id=1 lang=c
 *
 * [1] Two Sum
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
    int *newarr = (int *)malloc(sizeof(int)*2);
    
    *returnSize = 2;
    for(int i = 0 ; i<numsSize ; i++)
    {
        for(int j = numsSize-1; j>i ; j--)
        {
            if (nums[i]+nums[j] == target)
            {
               newarr[0] = i;
               newarr[1] = j;
               return newarr;
            }
        }
    }
    return NULL;
}
// @lc code=end

