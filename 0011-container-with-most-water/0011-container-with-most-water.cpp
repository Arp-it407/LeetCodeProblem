class Solution{
public:
  int maxArea(vector<int>&height){
    int left = 0;
    int maxWater = 0;
    int right = height.size() - 1;

    while(left < right){
        int W = right - left;
        int ht = min(height[left], height[right]);
        int currWa = W*ht;
        maxWater = max(maxWater, currWa);
        height[left] < height[right] ? left++: right--;
    }
    return maxWater;
  }
};