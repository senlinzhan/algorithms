class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum = std::max(sum + nums[i], nums[i]);
            maxSum = std::max(maxSum, sum);
        }
        
        return maxSum;
    }
};
