class Solution {
public:
    string addBinary(string a, string b)
    {
        auto i = a.rbegin();
        auto j = b.rbegin();

        int extra = 0;        
        std::string result;
        
        while (i != a.rend() && j != b.rend())
        {
            int sum = (*i - '0') + (*j - '0') + extra;
            result.push_back(sum % 2 + '0');
            extra = sum / 2;
            
            i++;
            j++;
        }

        while (i != a.rend())
        {
            int sum = *i - '0' + extra;
            result.push_back(sum % 2 + '0');
            extra = sum / 2;

            i++;
        }

        while (j != b.rend())
        {
            int sum = *j - '0' + extra;
            result.push_back(sum % 2 + '0');
            extra = sum / 2;

            j++;
        }

        if (extra > 0)
        {
            result.push_back(extra + '0');
        }

        std::reverse(result.begin(), result.end());

        return result;
    }
};
