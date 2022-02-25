class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int n = s.size() - 1;

        while(n >= 0 && s[n] == ' ')
            n--;

        for(int i=0; i<=n; i++)
        {
            if(s[i] != ' ')
                len++;
            else
                len = 0;
        }

        return len;
    }
};
