class Solution {
public:
    string longestCommonPrefix(const vector<string> &strs)
    {
        std::string result;

        if (strs.empty())
        {
            return result;
        }

        int length = 0;
        while (true)
        {
            if (length >= strs[0].size())
            {
                break;
            }
            
            char c = strs[0][length];            

            bool equals = true;
            for (auto &str: strs)
            {
                if (length >= str.size() || str[length] != c)
                {
                    equals = false;
                    break;
                }
            }

            if (!equals)
            {
                break;
            }
            length++;
        }

        if (length > 0)
        {
            result = std::string(strs[0].begin(),
                                 strs[0].begin() + length);
        }
        
        return result;
    }
};
