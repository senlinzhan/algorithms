class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        if (matrix.empty() || matrix[0].empty())
        {
            return false;
        }

        int rows = matrix.size();
        int cols = matrix[0].size();

        int rlow = 0;
        int rhigh = matrix.size() - 1;

        int targetRow = -1;
        while (rlow <= rhigh)
        {
            int rmid = (rlow + rhigh) / 2;
            if (target < matrix[rmid][0])
            {
                rhigh = rmid - 1;
            }
            else if (target > matrix[rmid][cols - 1])
            {
                rlow = rmid + 1;
            }
            else
            {
                targetRow = rmid;
                break;
            }
        }

        if (targetRow < 0)
        {
            return false;
        }

        int low = 0;
        int high = cols - 1;

        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (target < matrix[targetRow][mid])
            {
                high = mid - 1;
            }
            else if (target > matrix[targetRow][mid])
            {
                low = mid + 1;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
