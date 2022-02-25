class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int n = digits.size() - 1;
        int carry = 1;

        for(int i=n; i>=0; i--)
        {
            if(carry == 1)
            {
                digits[i] += 1;
                if(digits[i] >= 10)
                {
                    digits[i] %= 10;
                    carry = 1;
                }
                else
                {
                    carry = 0;
                }
            }
            ans.push_back(digits[i]);
        }

        if(carry == 1)
            ans.push_back(1);

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
