class Solution {
public:
    int climbStairs(int n)
    {
        if (n < 0)
        {
            return 0;
        }
        
        std::vector<int> state(n + 1, 0);

        state[0] = 0;
        state[1] = 1;
        state[2] = 2;

        for (int i = 3; i <= n; i++)
        {
            state[i] = state[i - 1] + state[i - 2];
        }

        return state[n];
    }
};
