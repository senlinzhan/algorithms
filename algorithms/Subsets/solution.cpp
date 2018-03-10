class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums)
    {
        auto result = subsets(nums, 0);
        result.push_back({});

        return result;
    }

    vector<vector<int>> subsets(vector<int>& nums, int i)
    {
        vector<vector<int>> result;

        if (i >= nums.size())
        {
            return result;
        }
        
        auto subs = subsets(nums, i + 1);
        results.insert(result.end(), subs.begin(), subs.end());
        
        for (auto &s: subs)
        {
            s.push_back(nums[i]);
            result.push_back(s);
        }

        result.push_back({nums[i]});

        return result;
    }    
};
