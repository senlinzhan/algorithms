class Solution {
public:
    void rotate(vector<vector<int>>& matrix)
    {
        int size = matrix.size();

        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                std::swap(matrix[i][j], matrix[size - j - 1][size - i - 1]);
            }
        }

        for (int i = 0; i < size / 2; i++)
        {
            for (int j = 0; j < size; j++)
            {
                std::swap(matrix[i][j], matrix[size - i - 1][j]);
            }
        }
    }
};
