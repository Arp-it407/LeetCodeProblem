// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int xorr = nums.size();
//         for(int i=0; i< nums.size(); i++){
//             xorr ^= i;
//             xorr ^= nums[i];
//         }
//         return xorr;
        
//     }
// };


class Solution {
public:
   int missingNumber(vector<int>& nums){
    int n = nums.size();

    int exepected =  n*(n+1)/2;
    int actual = 0;

    for(int num : nums){
        actual += num;
    
   }
    return exepected - actual;
}
};