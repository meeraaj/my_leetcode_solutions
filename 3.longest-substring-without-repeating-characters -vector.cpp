/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 *
 * https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
 *
 * algorithms
 * Medium (37.42%)
 * Likes:    42908
 * Dislikes: 2098
 * Total Accepted:    8M
 * Total Submissions: 21.4M
 * Testcase Example:  '"abcabcbb"'
 *
 * Given a string s, find the length of the longest substring without duplicate
 * characters.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: s = "abcabcbb"
 * Output: 3
 * Explanation: The answer is "abc", with the length of 3.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: s = "bbbbb"
 * Output: 1
 * Explanation: The answer is "b", with the length of 1.
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: s = "pwwkew"
 * Output: 3
 * Explanation: The answer is "wke", with the length of 3.
 * Notice that the answer must be a substring, "pwke" is a subsequence and not
 * a substring.
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 0 <= s.length <= 5 * 10^4
 * s consists of English letters, digits, symbols and spaces.
 * 
 * 
 */
 #include <unordered_set>
 #include <string>
using namespace std;
// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

            if (s.length()==0) return 0;
            if (s.length()==1) return 1;
            int l=0;
            int r=1;
            int max_len=1;
            unordered_set<char> window;
            window.insert(s[l]);

            while(r<s.length() && l<=r){
                while(r<s.length() && window.find(s[r]) == window.end()){
                    window.insert(s[r]);
                    r++;
                }
                if ((r-l)>max_len){
                    max_len=r-l;

                }

                window.erase(s[l]);
                l++;           
        
        }
        return max_len;
    }
    
};
// @lc code=end

