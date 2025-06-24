/*

class Solution {
public:
    vector<string> result;
    map<char, string> mpp{
        {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, 
        {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
    };

    void generateCombinations(int i, string& digits, string temp) {
        if (i == digits.size()) {
            result.push_back(temp);
            return;
        }
        
        for (auto ch : mpp[digits[i]]) {
            generateCombinations(i + 1, digits, temp + ch);
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};  // Handle empty input case
        
        result.clear();
        generateCombinations(0, digits, "");
        return result;
    }
};

*/