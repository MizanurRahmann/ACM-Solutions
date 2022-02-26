class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1)
            return x;

        long low = 0;
        long high = x/2;
        long mid;

        while(low <= high )
        {
            mid = (low + high) / 2;

            if(mid*mid > x)
                high = mid - 1;
            else if(mid*mid < x)
                low = mid + 1;
            else
                return mid;
        }

        return high;
    }
};
