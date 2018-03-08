class Solution {
public:
    int strStr(string haystack, string needle)
    {
        if (needle.empty())
        {
            return 0;
        }
        
        for (auto i = 0; i < haystack.size(); i++)
        {
            if (std::equals(needle.begin(), needle.end(), haystack.begin() + i))
            {
                return i;
            }
        }

        return -1;
    }
};
