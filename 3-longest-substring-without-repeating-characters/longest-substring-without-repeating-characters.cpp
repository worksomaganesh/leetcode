#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::vector<int> lastIndex(256, -1);
        int maxLen = 0;
        int left = 0;

        for (int right = 0; right < s.length(); ++right) {
            if (lastIndex[(unsigned char)s[right]] >= left) {
                left = lastIndex[(unsigned char)s[right]] + 1;
            }
            lastIndex[(unsigned char)s[right]] = right;
            maxLen = std::max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};