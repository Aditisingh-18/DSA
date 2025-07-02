class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charIndex;
        int maxLen = 0, start = 0;

        for (int end = 0; end < s.length(); end++) {
            char currentChar = s[end];

            if (charIndex.find(currentChar) != charIndex.end() &&
                charIndex[currentChar] >= start) {
                start = charIndex[currentChar] + 1;
            }

            charIndex[currentChar] = end;
            maxLen = max(maxLen, end - start + 1);
        }

        return maxLen;
    }
};
