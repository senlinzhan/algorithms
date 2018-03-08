class Solution {
public:
    int lengthOfLastWord(const string &s)
    {
        int length = 0;
        
        auto iter = s.rbegin();
        while (iter != s.rend() && *iter == ' ')
        {
            iter++;
        }

        while (iter != s.rend() && *iter != ' ')
        {
            length++;
            iter++;
        }
        
        return length;
    }
};
