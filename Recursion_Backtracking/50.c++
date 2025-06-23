/*

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1.0;
        }
        long long nn = n; // Convert to long long to handle INT_MIN
        if (nn < 0) {
            x = 1 / x;
            nn = -nn;
        }
        double result = 1.0;
        while (nn > 0) {
            if (nn % 2 == 1) {
                result *= x;
            }
            x *= x;
            nn /= 2;
        }
        return result;
    }
};

*/