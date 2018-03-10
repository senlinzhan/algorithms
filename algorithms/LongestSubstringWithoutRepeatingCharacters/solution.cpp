class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        std::vector<int> state(128, 0);

        int max = 0;
        int i = 0;
        int j = 0;
        int length = 0;

        while (j < s.size())
        {
            if (!state[s[j]])
            {
                state[s[j]] = true;
                length++;
                j++;
            }
            else
            {
                state.assign(128, 0);
                i++;
                j = i;

                if (length > max)
                {
                    max = length;
                }
                length = 0;
            }
        }

        if (length > 0 && length > max)
        {
            max = length;
        }

        return max;
    }
};
