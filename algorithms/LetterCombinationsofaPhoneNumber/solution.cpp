class Solution {
public:
    std::unordered_map<char, string> m =
    {
        {
            '2', "abc"
        },
        {
            '3', "def"
        },
        {
            '4', "ghi"
        },
        {
            '5', "jkl"
        },
        {
            '6', "mno"
        },
        {
            '7', "pqrs"
        },
        {
            '8', "tuv"
        },
        {
            '9', "wxyz"
        }
    };

    vector<string> letterCombinations(string digits)
    {
        return letterCombinations(digits, 0, digits.size() - 1);
    }
    
    vector<string> letterCombinations(string digits, int first, int last)
    {   
        vector<string> result;
        if (first > last)
        {
            return result;
        }
        
        if (first == last)
        {
            for (auto c: m[digits[first]])
            {
                result.push_back(string(1, c));
            }
            return result;
        }

        auto a = letterCombinations(digits, first, last - 1);
        for (auto elem: a)
        {
            for (auto c: m[digits[last]])
            {
                auto newElem = elem;
                newElem.push_back(c);
                result.push_back(newElem);
            }
        }
        return result;
    }
};
