class Solution {
private:
    vector<string> characters = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;

    void solve(string &digits, int index, string newString)
    {
        if(index >= digits.size())
        {
            ans.push_back(newString);
            return;
        }

        string alphabets = characters[ digits[index] - '2' ];

        for(auto c : alphabets)
            solve(digits, index+1, newString+c);
    }
public:
    vector<string> letterCombinations(string digits)
    {
        if(digits.size() == 0)
            return {};

        solve(digits, 0, "");
        return ans;
    }
};
