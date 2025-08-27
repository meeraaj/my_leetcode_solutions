 #include <string>
 #include <cctype>
using namespace std;    
// @lc code=start
class Solution {
public:
int countSegments(string s) {
    int segments = 0;
    for (int i = 0; i < s.length(); i++) {
        // Start of a new word
        if (!isspace(s[i]) && (i == 0 || isspace(s[i - 1]))) {
            segments++;
        }
    }
    return segments;
}

};