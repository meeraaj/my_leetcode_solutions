
 #include <unordered_set>
 #include <string>
using namespace std;

class Solution{
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