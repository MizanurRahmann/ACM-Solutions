class Solution {
public:
    int strStr(string haystack, string needle) {
        int hl = haystack.size();
        int nl = needle.size();
        int found = 0;
        int s;

        // if needle size is 0 then answer will be zero
        if(nl == 0) return 0;

        // if neddle size is not 0 then...
        for(int i=0; i<=hl-nl; i++)
        {
            if(haystack[i] == needle[0])
            {
                s = i;
                int j = 0;

                for(j=1; j<nl; j++)
                {
                    s++;
                    if(haystack[s] != needle[j])
                        break;
                }
                if(j == nl)
                {
                    found = 1;
                    s = i;
                    break;
                }
            }
        }

        if(found == 1)
            return s;
        else
            return -1;
    }
};
