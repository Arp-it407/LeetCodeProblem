class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> result;
        string current;
        
        unordered_map<char, string> phone = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
            {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
        };

        backtrack(digits, 0, phone, current, result);
        return result;
    }

private:
    void backtrack(const string& digits, int index, 
                   const unordered_map<char, string>& phone,
                   string& current, vector<string>& result) {
        if (index == digits.length()) {
            result.push_back(current);
            return;
        }

        for (char c : phone.at(digits[index])) {
            current.push_back(c);
            backtrack(digits, index + 1, phone, current, result);
            current.pop_back(); // backtrack
        }
    }
};
