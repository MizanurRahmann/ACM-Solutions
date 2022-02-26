class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";

        int i = a.size() - 1;
        int j = b.size() - 1;

        int x, y, sum, carry = 0;

        while(i>=0 || j>=0)
        {
            if(i >= 0)
                x = a[i] - '0';
            else
                x = 0;
            if(j >= 0)
                y = b[j] - '0';
            else
                y = 0;


            sum = (x + y + carry) % 2;
            carry = (x + y + carry) / 2;
            result += to_string(sum);

            i--;
            j--;
        }

        if(carry == 1)
            result += to_string(1);

        reverse(result.begin(), result.end());

        return result;
    }
};
