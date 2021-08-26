class Solution {
public:
    bool isPalindrome(int x) {
        vector<long long> v;

        // If it is negative then it is not a palindrom
        if(x < 0){
            return false;
        }

        // Get all digits
        while(x != 0 ){
            v.push_back(x % 10);
            x /= 10;
        }

        // Check if it is a palindrom or not
        int len = v.size();
        bool palindrome = true;
        for(int i=0; i<len/2; i++){
            if(v[i] != v[len - i - 1]){
                palindrome = false;
            }
        }

        return palindrome;
    }
};
