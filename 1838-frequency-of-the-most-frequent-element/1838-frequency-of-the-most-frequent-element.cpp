class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int j=0;
        long long sum = 0;
        int maxfreq = 1;

        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            long long constant = 1LL* nums[i]*(i-j+1)-sum;

            while(constant > k){
                sum -= nums[j];
                j++;
                constant = 1LL* nums[i]*(i-j+1)-sum;

            }
            maxfreq = max(maxfreq, i-j+1);
        }
        return maxfreq;
        
    }
};