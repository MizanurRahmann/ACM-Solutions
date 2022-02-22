class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int N = strs.size() ;
        string resultString = "" ;

        sort(strs.begin(), strs.end()) ;

        string firstString = strs[0] ;
        string lastString = strs[N-1] ;

        for(int i=0; i<firstString.size(); i++)
        {
            if(firstString[i] != lastString[i])
                break ;
            resultString += firstString[i] ;
        }

        return resultString ;
    }
};
