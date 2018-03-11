class Solution {
public:
    bool canJump(vector<int>& nums)
    {
        int reach = 0;

        for (int i = 0; i <= reach && i < nums.size(); i++)
        {
            reach = std::max(reach, nums[i] + i);
            if (reach >= nums.size() - 1)
            {
                break;
            }
        }

        return reach >= nums.size() - 1;
    }

};
