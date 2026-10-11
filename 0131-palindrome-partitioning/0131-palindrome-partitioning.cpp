class Solution {
public:
    bool IsPalin(string s) {
        string s2 = s;
        reverse(s2.begin(), s2.end());
        return s == s2;
    }

    void getAllParts(string s, vector<string>& partitions, vector<vector<string>>& ans) {
        if (s.empty()) {
            ans.push_back(partitions);
            return;
        }

        for (int i = 1; i <= s.size(); i++) {
            string part = s.substr(0, i);
            if (IsPalin(part)) {
                partitions.push_back(part);
                getAllParts(s.substr(i), partitions, ans);
                partitions.pop_back(); // backtrack
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partitions;
        getAllParts(s, partitions, ans);
        return ans;
    }
};
