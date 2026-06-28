# LeetCodeProblem
<!---LeetCode Topics Start-->
# LeetCode Topics
## Array
|  |
| ------- |
| [0238-product-of-array-except-self](https://github.com/Arp-it407/LeetCodeProblem/tree/master/0238-product-of-array-except-self) |

## solution-0238
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]*nums[i-1];
        }
        int suffix =1;
        for(int i=n-2; i>=0;i--){
            suffix*=nums[i+1];
            ans[i]*=suffix;
        }
        return ans;

        
    }
};
## Prefix Sum
|  |
| ------- |
| [0238-product-of-array-except-self](https://github.com/Arp-it407/LeetCodeProblem/tree/master/0238-product-of-array-except-self) |
<!---LeetCode Topics End-->
