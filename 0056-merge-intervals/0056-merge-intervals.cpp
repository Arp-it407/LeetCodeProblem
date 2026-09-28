#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Sort the intervals by start time
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        
        for (const auto& interval : intervals) {
            // If merged is empty or no overlap, add the interval
            if (merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval);
            } else {
                // Overlap exists, merge with the last interval
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }
        
        return merged;
    }
};
