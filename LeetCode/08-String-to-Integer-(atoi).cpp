class Solution {
public:
    long long myAtoi(string s) {
        int len = s.length();
        char sign = '.';
        bool digitFound = false;
        bool signApplcable = true;
        vector<int> v;

        // Take digits
        for(int i=0; i<len; i++){
            // 1. ignore leading space
            if(s[i] == ' ' && signApplcable == true && digitFound == false && sign == '.'){
                continue;
            }
            // 2. ignore leading zero
            if(s[i] == '0' && digitFound == false){
                signApplcable = false;
                continue;
            }
            // 3. sign check
            if((s[i] == '+' || s[i] == '-') && sign == '.' && digitFound == false && signApplcable == true){
                sign = s[i];
                continue;
            }
            // 4. take all digits
            if(s[i] >= '0' && s[i] <= '9'){
                v.push_back(s[i] - '0');
                digitFound = true;
                continue;
            }
            break;
        }

        //  Make number
        long long numb = 0;
        long long p = 0;
        bool overflow = false;
        for(int i=v.size()-1; i>=0; i--){
            numb += v[i] * pow(10,p);
            p++;
            if((p>10) or numb > INT_MAX) {overflow = true; break;}
        }

        // Check sign
        if(sign == '-'){
            numb *= -1;
        }

        // Check overflow
        if(overflow && sign == '-'){
            numb = INT_MIN;
        } else if(overflow){
            numb = INT_MAX;
        }

        // Return answer
        return numb;
    }
};
