class Solution {
public:
    vector<int> plusOne(const vector<int> &digits)
    {
        vector<int> result;
        
        if (digits.empty())
        {
            return result;
        }

        int extra = 1;
        for (auto iter = digits.rbegin(); iter != digits.rend(); iter++)
        {
            int sum = *iter + extra;
            extra = sum / 10;
            sum = sum % 10;

            result.push_back(sum);
        }

        if (extra > 0)
        {
            result.push_back(extra);
        }

        std::reverse(result.begin(), result.end());
        
        return result;
    }
};
