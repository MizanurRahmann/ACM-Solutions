class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = s.length();
        vector<int> lastIndex(256, -1);
        
        int i=0, ans=0;
        
        for (int j = 0; j < l; j++) {
            i = max(i, lastIndex[s[j]] + 1);
            ans = max(ans, j - i + 1);
            lastIndex[s[j]] = j;
        }
        return ans;
    }
};