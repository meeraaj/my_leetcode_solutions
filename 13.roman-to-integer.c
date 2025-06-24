/*
 * @lc app=leetcode id=13 lang=c
 *
 * [13] Roman to Integer
 */

// @lc code=start
int romanToInt(char* s) {
    int num = 0;
while (*s != '\0') {
        if (*s == 'I' && (*(s + 1) == 'V')) {
            num += 4;
            s += 2;
        } else if (*s == 'I' && (*(s + 1) == 'X')) {
            num += 9;
            s += 2;
        } else if (*s == 'X' && (*(s + 1) == 'L')) {
            num += 40;
            s += 2;
        } else if (*s == 'X' && (*(s + 1) == 'C')) {
            num += 90;
            s += 2;
        } else if (*s == 'C' && (*(s + 1) == 'D')) {
            num += 400;
            s += 2;
        } else if (*s == 'C' && (*(s + 1) == 'M')) {
            num += 900;
            s += 2;
        } else {
            if (*s == 'I') num += 1;
            else if (*s == 'V') num += 5;
            else if (*s == 'X') num += 10;
            else if (*s == 'L') num += 50;
            else if (*s == 'C') num += 100;
            else if (*s == 'D') num += 500;
            else if (*s == 'M') num += 1000;
            s++;
        }
    }
    return num;    
}
// @lc code=end

