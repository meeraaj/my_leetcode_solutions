/*
 * @lc app=leetcode id=14 lang=c
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
char* longestCommonPrefix(char** strs, int strsSize) {
    if(strsSize == 0){return "";}
    char *pre = strs[0];
    for(int i=0 ; i<strsSize ; i++)
    {
        while(strstr(strs[i],pre) != strs[i])
        {
            pre[strlen(pre)-1] = '\0';
            if(!*pre){return "";}
        }
    }
    return pre;
}
// @lc code=end

