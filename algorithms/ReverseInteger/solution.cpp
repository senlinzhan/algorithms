#include <limits>

class Solution {
public:
    int reverse(int x)
    {
        int imin = std::numeric_limits<int>::min();
        int imax = std::numeric_limits<int>::max();

        long long num = x;
        long long result = 0;

        bool isNegative = false;
        if (num < 0)
        {
            isNegative = true;
            num *= -1;
        }

        while (num > 0)
        {
            result = result * 10 + num % 10;
            num /= 10;
        }

        if (isNegative)
        {
            result *= -1;
            if (result < imin)
            {
                return 0;
            }
        }
        else
        {
            if (result > imax)
            {
                return 0;
            }
        }

        return static_cast<int>(result);
    }
};
