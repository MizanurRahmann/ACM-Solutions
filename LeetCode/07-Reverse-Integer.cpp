class Solution {
public:
    long long reverse(long long x) {
        vector<long long> v;
        while(x != 0 ){
            v.push_back(x % 10);
            x /= 10;
        }

        long long rnumb = 0;
        long long multiplier = 1;
        for(int i=v.size()-1; i>=0; i--){
            rnumb += v[i] * multiplier;
            multiplier *= 10;
        }

        if(rnumb > 2147483647){
            return 0;
        } else if(rnumb < -2147483648){
            return 0;
        } else{
            return rnumb;
        }
    }
};
