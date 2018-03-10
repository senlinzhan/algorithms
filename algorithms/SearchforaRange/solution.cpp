class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        vector<int> result = {-1, -1};

        if (nums.empty())
        {
            return result;
        }

        int low = 0;
        int high = nums.size() - 1;
        int pos = -1;
        
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (target < nums[mid])
            {
                high = mid - 1;
            }
            else if (target > nums[mid])
            {
                low = mid + 1;
            }
            else
            {
                pos = mid;
                break;
            }
        }

        if (pos < 0)
        {
            return result;
        }        

        int i = pos;
        while (i + 1 < nums.size() && nums[i + 1] == target)
        {
            i++;
        }

        result[1] = i;

        int j = pos;
        while (j - 1 >= 0 && nums[j - 1] == target)
        {
            j--;
        }
        result[0] = j;

        return result;
    }
};
