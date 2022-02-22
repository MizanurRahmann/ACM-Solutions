class Solution {
public:

    string convert (string &s) {
        unordered_map<char, char> m;
        char c = 'a';
        for (int i = 0; i < s.size(); i++) {
            if (m.find(s[i]) == m.end())
            {
                m[s[i]] = c;
                s[i] = c;
                c++;
            }
            else
            {
                s[i] = m[s[i]];
            }
        }
        return s;
    }

    vector<string> findAndReplacePattern(vector<string>& w, string p) {

        vector<string> ans;
        convert(p);

        string w1;
        for (int i = 0; i < w.size(); i++)
        {
            w1 = w[i];
            convert(w1);
            if (w1 == p)
                ans.push_back(w[i]);
        }
        return ans;
    }
};
