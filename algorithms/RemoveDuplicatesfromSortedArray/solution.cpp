class Solution {
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
        {
            return 0;
        }

        int elem = nums[0];

        int j = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != elem)
            {
                nums[j++] = nums[i];
                elem = nums[i];
            }
        }

        return j;
    }
};
