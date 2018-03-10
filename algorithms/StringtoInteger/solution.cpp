class Solution {
public:
    int myAtoi(string str)
    {
        int i = 0;
        while (i < str.size() && str[i] == ' ')
        {
            i++;
        }
        if (i == str.size())
        {
            return 0;
        }

        bool isNegative = false;
        if (str[i] == '+')
        {
            i++;
        }
        else if (str[i] == '-')
        {
            isNegative = true;
            i++;
        }
        else if (!std::isdigit(str[i]))
        {
            return 0;
        }

        long long result = 0;
        while (i < str.size() && std::isdigit(str[i]))
        {
            result = result * 10 + str[i] - '0';
            if (isNegative)
            {
                if (result * -1 < INT_MIN)
                {
                    return INT_MIN;
                }
            }
            else
            {
                if (result > INT_MAX)
                {
                    return INT_MAX;
                }
            }
            i++;
        }

        if (isNegative)
        {
            return static_cast<int>(result * -1);
        }
        return static_cast<int>(result);
    }
};
