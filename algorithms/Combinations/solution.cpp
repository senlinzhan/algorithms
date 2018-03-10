class Solution {
public:
    vector<vector<int>> combine(int n, int k)
    {
        return combine(1, n, k);
    }
    vector<vector<int>> combine(int first, int last, int k)
    {
        vector<vector<int>> result;

        if (k == 1)
        {
            for (int i = first; i <= last; i++)
            {
                result.push_back({i});
            }
            return result;
        }

        int size = last - first + 1;
        if (size == k)
        {
            vector<int> a;
            for (int i = first; i <= last; i++)
            {
                a.push_back(i);
            }

            result.push_back(a);

            return result;
        }
        
        result = combine(first + 1, last, k);
        auto a = combine(first + 1, last, k - 1);
        for (auto &elem: a)
        {
            elem.push_back(first);
        }

        result.insert(result.end(), a.begin(), a.end());

        return result;
    }
};
