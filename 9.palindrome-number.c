/*
 * @lc app=leetcode id=9 lang=c
 *
 * [9] Palindrome Number
 */

// @lc code=start
bool isPalindrome(int x) {
    if (x < 0) {
        return 0;
    }
    long newnum = 0, copy_num = x;
    while (copy_num != 0) {
        long remainder = copy_num % 10;
        newnum = newnum * 10 + remainder;
        copy_num = copy_num / 10;
    }
    if (x == newnum) {
        return 1;
    }
    else 
    {
        return 0;
    }
}
// @lc code=end

