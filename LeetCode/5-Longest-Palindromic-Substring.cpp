class Solution {
private:
    int sizeOfPalindrom(string s, int l, int r)
    {
        while(l>=0 && r<s.size() && s[l] == s[r])
        {
            --l;
            ++r;
        }
        return r - l -1;
    }
public:
    string longestPalindrome(string s) {
        int maxLength = 0;
        int start = 0;
        int strLength = s.size();

        for(int i=0; i<strLength; i++)
        {
            int oc = sizeOfPalindrom(s, i, i);
            int dc = sizeOfPalindrom(s, i, i+1);

            int len = max(oc, dc);

            if(maxLength < len)
            {
                start = i - (len - 1) / 2;
                maxLength = len;
            }
        }

        string result = s.substr(start, maxLength);
        return result;
    }
};
