class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charIndex; // stores char -> last index
        int maxlength = 0;
        int start = 0;

        for(int end=0; end < s.size(); end++){
            int currChar = s[end];
            
            if(charIndex.find(currChar) != charIndex.end() && charIndex[currChar] >= start){
                start = charIndex[currChar] + 1;

            }
            charIndex[currChar] = end;
            maxlength = max(maxlength , end-start+1);
            
        }
        return maxlength;
    }
};

// start with to store the char using unorder_map currindex
// insialize maxlength = 0 and start = 0
// for int end = 0 to n
// char currentchar = s[end]
// if currindex of currchar != currindex of currchar.end() && currindex of currchar >= start
// then start = currindex[currchar] +1
// currindex[currchar] = end
// maxlength = max(maxlength, end-start+1)
// return maxlength