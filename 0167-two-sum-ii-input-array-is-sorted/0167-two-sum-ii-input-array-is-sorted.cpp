class Solution{
public:
  vector<int> twoSum(vector<int>&nums , int target){
    int left = 0;
    int right = nums.size()-1;
    vector<int>v;

    while(left < right){
        int sum = nums[left] + nums[right];
        if(sum == target){
            v.push_back(left+1);
            v.push_back(right+1);

        }
        if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }
    return v;
    }
  
};

// using two pointer approch in this intiallise left =0 and right = nums.size()-1
//using while loop left is less than right
// sum = nums[left] + nums[right]
//if sum != target so we push in the array with left+1 and right+1
// if sum == target move left++ else right--
//